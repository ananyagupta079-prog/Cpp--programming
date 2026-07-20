#include<iostream>
#include<conio.h>
using namespace std;
class print{
    public:
    virtual void show(){
        cout<<"base class";
    }
};
class pr:public print{
    public:
    void show(){
        cout<<"derived class";
    }
};
int main(){
    print *p;
    pr d;
    p=&d;
    p->show();
}
