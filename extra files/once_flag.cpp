#include &#x3C;iostream&#x3E;
#include &#x3C;mutex&#x3E;
#include &#x3C;time.h&#x3E;
#include &#x3C;chrono&#x3E;

using namespace std;

once_flag flag;
string x;

void get_time(){
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&#x26;now);
    strftime(buf, sizeof(buf), &#x22;%Y-%m-%d.%X&#x22;, &#x26;tstruct);
    
    x = buf;
}

int main(){
    
    call_once(flag,get_time);
    cout &#x3C;&#x3C; x &#x3C;&#x3C; endl;
    call_once(flag,get_time);
    cout &#x3C;&#x3C; x &#x3C;&#x3C; endl;
    call_once(flag,get_time);
    cout &#x3C;&#x3C; x &#x3C;&#x3C; endl;
    
    return 0;
}

2020-12-13.22:18:36
2020-12-13.22:18:36
2020-12-13.22:18:36