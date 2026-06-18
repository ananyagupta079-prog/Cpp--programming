#include<iostream>
#include<conio.h>
using namespace std;
class bike{
    char name[30];
    int d,cc;
    public:
    void get();
    void put();
};
void bike::get(){
    cout<<"Enter name,avg distance and cc";
    cin>>name>>d>>cc;
}
void bike::put(){
    cout<<"name\t"<<name<<endl<<"distance\t"<<d<<endl<<"cc\t"<<cc<<endl;
}
int main(){
    bike b[5];
    int i;
    for(i=0;i<5;i++){
        b[i].get();
    }
    for(i=0;i<5;i++){
        b[i].put();
    }
}
