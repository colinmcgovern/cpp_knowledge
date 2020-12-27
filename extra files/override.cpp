#include &#x3C;iostream&#x3E;

using namespace std;

class base{
    virtual double override_me(double d) = 0;
};

class derived : base{
    double override_me(double d) override {return d;}
    //double override_me(int d) override {return d;} THIS WOULD RETURN A ERROR
};

int main(){
    return 0;
}

