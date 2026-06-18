//using parametrized constructor
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student{
    char name[200];
    int per;
    public:
    student(char n[200],int p){
    strcpy(name,n);
    per=p;
}
void display(){
    cout<<"name\t"<<name<<endl;
    cout<<"percentage\t"<<per<<endl;
}
};
int main(){
    student s1("ABC",88);
    s1.display();
}
