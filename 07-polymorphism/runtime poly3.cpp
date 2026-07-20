#include<iostream>
#include<conio.h>
using namespace std;
class shape{
    public:
    virtual void accept(){
        cout<<"this is shape class";
    }
    virtual void area(){
        cout<<"this us sahape class";
    }
};
class tri:public shape{
    int b,h;
    public:
    void accept(){
        cout<<"enter base and height";
        cin>>b>>h;
    }
    void area(){
        cout<<0.5*b*h<<endl;
    }
};
class rec:public shape{
    int l,b;
    public:
    void accept(){
        cout<<"enter length and breadth";
        cin>>l>>b;
    }
    void area(){
        cout<<l*b<<endl;
    }
};
int main(){
    shape s,*ptr;
    tri t;
    rec r;
    ptr=&s;
    ptr->accept();
    ptr->area();
    ptr=&t;
    ptr->accept();
    ptr->area();
    ptr=&r;
    ptr->accept();
    ptr->area();
}
