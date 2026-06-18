#include<iostream>
#include<conio.h>
using namespace std;
class employee{
    int empid;
    char name[30];
    public:
    void get(){
        cout<<"enter emp_id and name";
        cin>>empid>>name;
    }
    void put(){
        cout<<"employee id\t"<<empid<<endl;
        cout<<"name\t"<<name<<endl;
    }
};
class worker:public employee{
    int dw;
    public:
    void accept(){
        cout<<"enter daily wages";
        cin>>dw;
    }
    void display(){
        cout<<"daily wages\t"<<dw<<endl;
    }
};
int main(){
    worker w;
    w.get();
    w.accept();
    w.put();
    w.display();
}
