#include<iostream>
#include<conio.h>
using namespace std;
class tri{
    public:
    float b,h;
    public:
    void gettri(){
        cout<<"enter base and height";
        cin>>b>>h;
    }
};
class rec{
    public:
    float l,br;
    public:
    void getrec(){
        cout<<"enter length and breadth";
        cin>>l>>br;
    }
};
class shape:public tri,public rec{
    float area;
    public:
    void areatri(){
        cout<<"area of triangle\t"<<0.2*b*h<<endl;
    }
    void arearec(){
        cout<<"area of rectangle\t"<<l*br<<endl;
    }
};
int main(){
    shape s;
    s.gettri();
    s.getrec();
    s.areatri();
    s.arearec();
}
