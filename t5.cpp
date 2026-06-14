#include<iostream>
#include<conio.h>
using namespace std;
class student{
    int rno;
    char name[30];
    public:
    void get(){
        cout<<"enter name and rollno";
        cin>>name>>rno;
    }
    void put(){
        cout<<"rollno\t"<<rno<<endl;
        cout<<"name\t"<<name<<endl;
    }
};
class engg_stud:public student{
    char sub[30];
    public:
    void accept(){
        cout<<"enter subject name";
        cin>>sub;
    }
    void display(){
        cout<<"subject name\t"<<sub<<endl;
    }
};
class diploma_stud:public student{
    char result[30];
    public:
    void g(){
        cout<<"enter result";
        cin>>result;
    }
    void p(){
        cout<<"result is\t"<<result<<endl;
    }
};
int main(){
    engg_stud e;
    diploma_stud d;
    d.get();
    e.accept();
    d.g();
    d.put();
    e.display();
    d.p();
}