#include<iostream>
#include<conio.h>
using namespace std;
class result{
    public:
    char name[20];
    int m1,m2,m3;
    public:
    void get();
};
void result::get(){
    cout<<"enter name and marks";
    cin>>name>>m1>>m2>>m3;
}
int main(){
    result r[5];
    int i,avg;
    for(i=0;i<5;i++){
        r[i].get();
    }
    for(i=0;i<5;i++){
        avg=(r[i].m1+r[i].m2+r[i].m3)/3;
        if(avg>75){
            cout<<"name\t"<<r[i].name;
        }
    }
}