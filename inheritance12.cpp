#include<iostream>
#include<conio.h>
using namespace std;
class student{
    int rno;
    char name[30];
    public:
    void get(){
        cout<<"enter rollno and name";
        cin>>rno>>name;
    }
    void put(){
        cout<<"roll no\t"<<rno<<endl;
        cout<<"name\t"<<name<<endl;
    }
};
class test:public student{
    public:
    int m1,m2;
    public:
    void accept(){
        cout<<"enter marks";
        cin>>m1>>m2;
    }
    void display(){
        cout<<"marks are\t"<<m1<<","<<m2<<endl;
    }
};
class result:public test{
    int t;
    public:
    void d(){
        cout<<"total is\t"<<(m1+m2)<<endl;
    }
};
int main(){
    result r;
    r.get();
    r.accept();
    r.put();
    r.display();
    r.d();
}
