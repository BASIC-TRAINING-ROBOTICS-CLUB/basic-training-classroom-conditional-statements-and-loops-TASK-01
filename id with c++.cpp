#include<iostream>
using namespace std;

class id{
    int roll_no;
    char name[20];
    public:;
    void input(){
        cout<<"enter the name :\n";
        cin>>name;
        cout<< "enter the roll no. :\n";
        cin>>roll_no;
    }
    void output(){
        cout<<"Name ="<<name<<endl;
        cout<<"Roll no. ="<< roll_no<<endl;
    }
};
int main(){
    id a;
    a.input();
    a.output();
}   