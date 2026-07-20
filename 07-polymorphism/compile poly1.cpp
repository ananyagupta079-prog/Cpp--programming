#include<iostream>
#include<conio.h>
using namespace std;
float area(float);
float area(float,float);
float area(float r){
    return 3.14*r*r;
}
float area(float l,float b){
    return l*b;
}
int main(){
    float res,r,l,b,res1;
    cout<<"enter the radius";
    cin>>r;
    cout<<"enter the length and breadth";
    cin>>l>>b;
    res=area(r);
    res1=area(l,b);
    cout<<"area of circle\t"<<res<<endl;
    cout<<"area of rectangle\t"<<res1<<endl;
}
