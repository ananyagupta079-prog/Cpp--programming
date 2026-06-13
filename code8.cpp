#include<iostream>
#include<conio.h>
using namespace std;
class student{
    int rno;
    public:
    void get1(){
        cout<<"enter roll no";
        cin>>rno;
    }
    void put1(){
        cout<<"roll no\t"<<rno<<endl;
    }
};
class test:public student{
    public:
    int p1,p2;
    public:
    void get2(){
        cout<<"enter part1 and part2 ";
        cin>>p1>>p2;
    }
    void put2(){
        cout<<"part1 and part2\t"<<p1<<","<<p2<<endl;
    }
};
class sports{
    public:
    int score;
    public:
    void get3(){
        cout<<"enter score";
        cin>>score;
    }
    void put3(){
        cout<<"score\t"<<score<<endl;
    }
};
class result:public test,public sports{
    int total;
    public:
    void put4(){
        total=p1+p2+score;
        cout<<"total\t"<<total<<endl;
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