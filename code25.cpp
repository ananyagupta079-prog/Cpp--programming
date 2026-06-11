#include<iostream>
#include<conio.h>
using namespace std;
class student{
    int rno;
    char name[30];
    public:
    void get();
    void put();
};
void student::get(){
    cout<<"enter name and rollno";
    cin>>name>>rno;
}
void student::put(){
    cout<<"name\t"<<name<<endl<<"rollno\t"<<rno<<endl;
}
int main(){
    student s[3];
    for(int i=0;i<3;i++){
        s[i].get();
    }
    for(int i=0;i<3;i++){
        s[i].put();
    }
}