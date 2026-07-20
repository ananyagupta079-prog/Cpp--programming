#include<iostream>
#include<conio.h>
using namespace std;
float volume(float a,float b,float c){
    return a*b*c;
}
float volume(float r,float h){
    return 3.14*r*r*h;
}
int main(){
    float x,y,z,r1,r2,r,h;
    cout<<"enter the cube sides";
    cin>>x>>y>>z;
    cout<<"enter the radius and height";
    cin>>r>>h;
    r1=volume(x,y,z);
    cout<<r1<<endl;
    r2=volume(r,h);
    cout<<r2<<endl;
}
