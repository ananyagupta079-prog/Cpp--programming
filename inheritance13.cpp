#include<iostream>
#include<conio.h>
using namespace std;
class customer{
    char name[20];
    int pn;
    public:
    void get(){
        cout<<"enter name and phone number";
        cin>>name>>pn;
    }
    void put(){
        cout<<"name\t"<<name<<endl;
        cout<<"phone number\t"<<pn<<endl;
    }
};
class depositor:public customer{
    int an;
    float bal;
    public:
    void accept(){
        cout<<"enter account name and balance";
        cin>>an>>bal;
    }
    void display(){
        cout<<"account name\t"<<an<<endl;
        cout<<"balance\t"<<bal<<endl;
    }
};
class borrower:public depositor{
    int ln;
    float la;
    public:
    void a(){
        cout<<"enter loan number and loan amount";
        cin>>ln>>la;
    }
    void d(){
        cout<<"loan number\t"<<ln<<endl;
        cout<<"loan amount\t"<<la<<endl;
    }
};
int main(){
    borrower b;
    b.get();
    b.accept();
    b.a();
    b.put();
    b.display();
    b.d();
}
