#include<iostream>
#include<conio.h>
using namespace std;
class employee{
    int eid;
    char ename[20];
    public:
    void get(){
        cout<<"enter employee id and employee name";
        cin>>eid>>ename;
    }
    void put(){
        cout<<"employee id\t"<<eid<<endl;
        cout<<"employee name\t"<<ename<<endl;
    }
};
class worker:public employee{
    public:
    float sal;
    public:
    void accept(){
        cout<<"enter salary";
        cin>>sal;
    }
    void display(){
        cout<<"salary is\t"<<sal<<endl;
    }
};
class manager:public employee{
    int all;
    public:
    void g(){
        cout<<"enter the allowance";
        cin>>all;
    }
    void p(){
        cout<<"allowance is\t"<<all<<endl;
    }
};
int main(){
    worker w;
    manager m;
    m.get();
    w.accept();
    m.g();
    m.put();
    w.display();
    m.p();
}