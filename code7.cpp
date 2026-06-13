#include<iostream>
#include<conio.h>
using namespace std;
class staff{
    int sc;
    public:
    void get(){
        cout<<"enter staff code";
        cin>>sc;
    }
    void put(){
        cout<<"staff code\t"<<sc<<endl;
    }
};
class teacher:public staff{
    char sub[30];
    public:
    void accept(){
        cout<<"enter the subject";
        cin>>sub;
    }
    void display(){
        cout<<"subject\t"<<sub<<endl;
    }
};
class officer:public staff{
    char grade[30];
    public:
    void g(){
        cout<<"enter the grade";
        cin>>grade;
    }
    void p(){
        cout<<"grade \t"<<grade<<endl;
    }
};
int main(){
    teacher t;
    officer o;
    o.get();
    t.accept();
    o.g();
    o.put();
    t.display();
    o.p();
}