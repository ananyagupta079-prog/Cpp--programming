#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employee{
    int eid;
    char ename[30];
    public:
    employee(int a,char n[30]){
        eid=a;
        strcpy(ename,n);
    }
    void put1(){
        cout<<"employee id\t"<<eid<<endl;
        cout<<"employee name\t"<<ename<<endl;
    }
};
class fitness:public employee{
    int h,w;
    public:
    fitness(int r,char n[30],int a,int b):
    employee(r,n){
        h=a;w=b;
    }
    void put2(){
        cout<<"height\t"<<h<<endl;
        cout<<"weight\t"<<w<<endl;
    }
};
int main(){
    fitness f(1,"abc",125,67);
    f.put1();
    f.put2();
}