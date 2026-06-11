#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class city{
    public:
    char name[20];
    int pop;
    public:
    void get();
};
void city::get(){
    cout<<"enter name and population";
    cin>>name>>pop;
}
int main(){
    city c[5];
    char t_city[30];
    int i,j,temp;
    for(i=0;i<5;i++){
        c[i].get();
    }
    for(j=0;j<5;j++){
        if(c[j].pop>c[j+1].pop){
            temp=c[j].pop;
            strcpy(t_city,c[j].name);
            c[j].pop=c[j+1].pop;
            strcpy(c[j].name,c[j+1].name);
            c[j+1].pop=temp;
            strcpy(c[j+1].name,t_city);
        }
    }
    cout<<c[j-1].name<<"has highest population\t"<<c[j-1].pop;
}