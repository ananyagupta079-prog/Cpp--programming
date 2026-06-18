#include<iostream>
#include<conio.h>
using namespace std;
class space{
    int x,y,z;
    public:
    void get(int,int,int);
    void put();
    void operator++();
};
void space:: get(int a,int b,int c){
    x=a;y=b;z=c;
}
void space::put(){
    cout<<"numbers are\t"<<x<<","<<y<<","<<z<<endl;
}
void space::operator++(){
    x++;
    y++;
    z++;
}
int main(){
    space s;
    s.get(10,20,30);
    s.put();
    ++s;
    s.put();
}
