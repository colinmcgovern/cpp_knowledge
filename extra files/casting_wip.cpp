#include <iostream>
#include <string>

using namespace std;

class base{
    base(string s){
        cout << "base with name: " << s << endl;
    }
};

class derived : public base{
    derived(string s){
        cout << "derived with name: " << s << endl;
    }
};

void int_print(const int& x){
    cout << "non-const int: " << x << endl;
}

int main(){

    //Static cast example
    double a1 = 5.5;
    int a2 = static_cast<int>(a1);
    cout << "double: " << a1 << " static casted to int: " << a2 << endl;
    
    //Dynamic cast example
    //TODO figure this out
    base b1 = base("b1");
    derived b2 = derived("b2");
    
    
    
    //Const cast example
    //TODO WHEN DO YOU NEED TO USE A CONST CAST?????
    const int e = 1;
    int_print(const_cast<const int&>(e));
    int_print(e);
    
    //Reinterpret cast example
    float f = 1234.5678;
    int g = *reinterpret_cast<int*>(&f);
    cout << "float: " << f << " reinterpret casted to int: " << g << endl;
    
}