#include<iostream>
#include<conio.h>
using namespace std;
class student{
    int rno;
    public:
    void get1(){
        cout<<"enter rollno";
        cin>>rno;
    }
    void put1(){
        cout<<"rollno\t"<<rno<<endl;
    }
};
class test:public virtual student{
    public:
    int t1,t2;
    public:
    void get2(){
        cout<<"enter test1 and test2";
        cin>>t1>>t2;
    }
    void put2(){
        cout<<"marks of test 1 and test2\t"<<t1<<","<<t2<<endl;
    }
};
class sports:public virtual student{
    public:
    int score;
    public:
    void get3(){
        cout<<"enter the score";
        cin>>score;
    }
    void put3(){
        cout<<"score\t"<<score<<endl;
    }
};
class result:public test,public sports{
    int res;
    public:
    void put4(){
        cout<<"result\t"<<t1+t2+score<<endl;
    }
};
int main(){
    result r;
    r.get1();
    r.get2();
    r.get3();
    r.put1();
    r.put2();
    r.put3();
    r.put4();
}