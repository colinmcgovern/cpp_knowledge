#include &#x3C;iostream&#x3E;

using namespace std;

double the_number_two() noexcept {
    //throw 2; THIS WOULD CAUSE AN ERROR
    return 2;
}

int main(){
    the_number_two();
    return 0;
}