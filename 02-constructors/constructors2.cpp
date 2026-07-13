//using default constructor
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student{
    char name[20];
    int per;
    public:
    student(){
        strcpy(name," ");
        per=0;
    }
    void accept(){
        cout<<"enter name and percentage";
        cin>>name>>per;
    }
    void display(){
        cout<<"name\t"<<name<<endl;
        cout<<"percentage\t"<<per<<endl;
    }
};
int main(){
    student s1;
    s1.accept();
    s1.display();
}
