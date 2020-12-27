#include &#x3C;iostream&#x3E;
#include &#x3C;shared_mutex&#x3E;
#include &#x3C;mutex&#x3E;
#include &#x3C;thread&#x3E;
#include &#x3C;unistd.h&#x3E;

using namespace std;

double price = 0;
shared_timed_mutex m;
mutex pm;

void update_price(double p){
    unique_lock ul(m);
    price = p;
    lock_guard&#x3C;mutex&#x3E; lg(pm);
    cout &#x3C;&#x3C; &#x22;The new price is &#x22; &#x3C;&#x3C; price &#x3C;&#x3C; endl;
}

double read_price(){
    shared_lock sl(m);
    lock_guard&#x3C;mutex&#x3E; lg(pm);
    cout &#x3C;&#x3C; &#x22;Reading price: &#x22; &#x3C;&#x3C; price &#x3C;&#x3C; endl;
    return price;
}

int main(){
        
    for(uint i=0;i&#x3C;10;i++){
        
        usleep(100);
        
        thread t;
        
        if(i%3==0){
            t = thread(update_price,i);
        }
        else{
            t = thread(read_price);
        }
    
        t.detach();
        
    }
    
    sleep(1);
    
    
    return 0;
}


The new price is 0
Reading price: 0
Reading price: 0
The new price is 3
Reading price: 3
Reading price: 3
The new price is 6
Reading price: 6
Reading price: 6
The new price is 9