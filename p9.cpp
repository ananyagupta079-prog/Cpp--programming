#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class concat{
    char str1[20];
    public:
    void get(){
        cin>>str1;
    }
    void put(){
        cout<<str1<<endl;
    }
    concat operator+(concat c){
        concat temp;
        strcpy(temp.str1,c.str1);
        strcat(str1,temp.str1);
        strcpy(temp.str1,str1);
        return temp;
    }
};
int main(){
    concat ad1,ad2,ad3;
    cout<<"enter first string",
    ad1.get();
    cout<<"enter second string";
    ad2.get();
    ad3=ad1+ad2;
    ad3.put();
}