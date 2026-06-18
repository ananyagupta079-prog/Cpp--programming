#include<iostream>
#include<conio.h>
using namespace std;
int add(int,int,int,int,int,int,int,int,int,int);
float add(float,float,float,float,float);
int add(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j){
    return(a+b+c+d+e+f+g+h+i+j);
}
float add(float x,float y,float z,float w,float u){
    return(x+y+z+w+u);
}
int main(){
    float a1,a2,a3,a4,a5,r1;
    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,r2;
    cout<<"enter the int numbers";
    cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8>>x9>>x10;
    cout<<"enter the floating number";
    cin>>a1>>a2>>a3>>a4>>a5;
    r1=add(a1,a2,a3,a4,a5);
    cout<<r1<<endl;
    r2=add(x1,x2,x3,x4,x5,x6,x7,x8,x9,x10);
    cout<<r2<<endl;
}