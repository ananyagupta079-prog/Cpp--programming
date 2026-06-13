#include<iostream>
#include<conio.h>
using namespace std;
class account{
    char at[60];
    public:
    void get1(){
        cout<<"enter account type";
        cin>>at;
    }
    void put1(){
        cout<<"account type"<<at<<endl;
    }
};
class saving:public virtual account{
    int st;
    public:
    void get2(){
        cout<<"enter saving account number";
        cin>>st;
    }
    void put2(){
        cout<<"saving account number\t"<<st<<endl;
    }
};
class current:public virtual account{
    int ct;
    public:
    void get3(){
        cout<<"enter current account number";
        cin>>ct;
    }
    void put3(){
        cout<<"current account number\t"<<ct<<endl;
    }
};
class fix:public saving,public current{
    int ft;
    public:
    void get4(){
        cout<<"enter fixed account number";
        cin>>ft;
    }
    void put4(){
        cout<<"fixed account number\t"<<ft<<endl;
    }
};
int main(){
    fix f;
    f.get1();
    f.get2();
    f.get3();
    f.get4();
    f.put1();
    f.put2();
    f.put3();
    f.put4();
}