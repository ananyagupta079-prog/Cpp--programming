#include<iostream>
#include<conio.h>
using namespace std;
class student{
    public:
    int rno;
    char name[30];
    public:
    void get(){
        cout<<"enter roll no and name";
        cin>>rno>>name;
    }
    void put(){
        cout<<"name\t"<<name<<endl;
        cout<<"rollno\t"<<rno<<endl;
    }
};
class teacher{
    char name[30],sub[30];
    public:
    void accept(){
        cout<<"enter anme and subject";
        cin>>name>>sub;
    }
    void display(){
        cout<<"name\t"<<name<<endl;
        cout<<"subject\t"<<sub<<endl;
    }
};
class info:public student,public teacher{
    public:
    void p(){
        cout<<"from info class"<<endl;
    }
};
int main(){
    info i;
    i.get();
    i.accept();
    i.put();
    i.display();
    i.p();
}
