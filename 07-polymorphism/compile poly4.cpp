#include<iostream>
#include<conio.h>
using namespace std;
void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    cout<<a<<b<<endl;
}
void swap(float x,float y){
    float t;
    t=x;
    x=y;
    y=t;
    cout<<x<<y;
}
int main(){
    int a,b,r1;
    float x,y,r2;
    cout<<"enter integer numbers";
    cin>>a>>b;
    cout<<"enter floating point numbers";
    cin>>x>>y;
    swap(a,b);
    swap(x,y);

}
