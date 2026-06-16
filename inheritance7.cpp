#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class staff{
    char name[20];
    char post[20];
    public:
    void get();
    void put();
};
void staff::get(){
    cout<<"enter name and post";
    cin>>name>>post;
}
void staff::put(){
    if(strcmp(post,"hod")==0)
    cout<<"name\t"<<name<<endl<<"post\t"<<post<<endl;
}
int main(){
    staff s[5];
    int i;
    for(i=0;i<5;i++){
        s[i].get();
    }
    for(i=0;i<5;i++){
        s[i].put();
    }
}
