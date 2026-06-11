#include<iostream>
#include<conio.h>
using namespace std;
class employee{
    int emp_id;
    char name[20];
    public:
    void get1(){
        cout<<"enter name and empid";
        cin>>name>>emp_id;
    }
    void put1(){
        cout<<"name\t"<<name<<endl<<"emp_id\t"<<emp_id<<endl;
    }
};
class fitness:public employee{
    int h,w;
    public:
    void get2(){
        cout<<"enter weight and height";
        cin>>w>>h;
    }
    void put2(){
        cout<<"weight\t"<<w<<endl<<"height\t"<<h<<endl;
    }
};
int main(){
    fitness e;
    e.get1();
    e.get2();
    e.put1();
    e.put2();
}