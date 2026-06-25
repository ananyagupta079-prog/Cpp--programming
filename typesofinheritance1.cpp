#include<iostream>
#include<conio.h>
using namespace std;
class employee{
    public:
    int eid;
    char ename[30];
    public:
    void get(){
        cout<<"enter employee id and name";
        cin>>eid>>ename;
    }
    void put(){
        cout<<"employee id\t"<<eid<<endl;
        cout<<"name\t"<<ename<<endl;
    }
};
class emp_union{
    public:
    int mid;
    public:
    void accept(){
        cout<<"enter member id";
        cin>>mid;
    }
    void display(){
        cout<<"member id\t"<<mid<<endl;
    }
};
class emp_info:public employee,public emp_union{
    public:
    float bs;
    void g(){
        cout<<"enter basic salary";
        cin>>bs;
    }
    void p(){
        cout<<"basic salary\t"<<bs<<endl;
    }
};
int main(){
    emp_info e;
    e.get();
    e.accept();
    e.g();
    e.put();
    e.display();
    e.p();
}
