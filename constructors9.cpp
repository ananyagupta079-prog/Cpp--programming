#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student{
    int rno;
    char name[30];
    char course[30];
    public:
    student(char str[30]="computer engineering");
    void accept();
    void display();
};
student::student(char str[30]){
    strcpy(course,str);
}
void student::accept(){
    cout<<"enter name and rollno";
    cin>>name>>rno;
}
void student::display(){
    cout<<"name\t"<<name<<endl;
    cout<<"rollno\t"<<rno<<endl;
    cout<<"course\t"<<course<<endl;
}
int main(){
    student s[2];
    for(int i=0;i<2;i++){
        s[i].accept();
    }
    for(int i=0;i<2;i++){
        s[i].display();
    }
}
