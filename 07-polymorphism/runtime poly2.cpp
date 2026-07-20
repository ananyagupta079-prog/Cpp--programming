#include<iostream>
#include<conio.h>
using namespace std;
class employee{
    public:
    virtual void show(){
        cout<<"employee class"<<endl;
    }
};
class programmer:public employee{
    public:
    void show(){
        cout<<"programmer class"<<endl;
    }
};
class manager:public employee{
    public:
    void show(){
        cout<<"manager class"<<endl;
    }
};
int main(){
    employee e ,*ptr;
    programmer p;
    manager m;
    ptr=&e;
    ptr->show();
    ptr=&p;
    ptr->show();
    ptr=&m;
    ptr->show();
}
