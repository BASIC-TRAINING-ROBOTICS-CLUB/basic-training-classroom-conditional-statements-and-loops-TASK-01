#include<iostream>
using namespace std;

class cal{
    int a,b;
    public:
    void input(){
        cout<<"enter the 1st value :\n";
        cin>>a;
        cout<< "enter the 2nd value :\n";
        cin>>b;
    }
    int add(){
        cout<<"addition ="<<a+b<<endl;
        return a+b;
    }
    void sub(){
        cout<<"subtraction ="<<a-b<<endl;
    }
    float div(){
        float c=(float)a/b;
        cout<<"div ="<<c<<endl;
        return c;
    }
    void mul(){
        cout<<"multiplication = "<<a*b<<endl;
    }
};

int main(){
    cal x;
    x.input();
    x.add();
    x.mul();
    x.sub();
    x.div();

}