#include<iostream>
#include<conio.h>
using namespace std;
class student{
    int rno;
    char name[30];
    public:
    void get(){
        cout<<"enter name and roll no";
        cin>>name>>rno;
    }
    void display(){
        cout<<"name\t"<<name<<endl;
        cout<<"rollno\t"<<rno<<endl;
    }
};
class engg_student:public student{
    public:
    char branch[30];
    void accept(){
        cout<<"enter branch";
        cin>>branch;
    }
    void put(){
        cout<<"branch\t"<<branch<<endl;
    }
};
int main(){
    engg_student e;
    e.get();
    e.accept();
    e.display();
    e.put();
}