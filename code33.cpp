#include<iostream>
#include<conio.h>
using namespace std;
class si{
    int p,t;
    float r;
    public:
    si(int a,int b,float c);
    void put();
};
si::si(int a,int b,float c=11.5){
    p=a;t=b;r=c;
}
void si::put(){
    int si=(p*r*t)/100;
    cout<<"simple interest\t"<<si;
}
int main(){
    si s(1000,4);
    s.put();
}