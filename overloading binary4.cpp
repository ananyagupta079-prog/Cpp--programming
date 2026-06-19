#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class compare{
    char str[20];
    public:
    void get(){
        cin>>str;
    }
    void operator>(compare);
};
void compare::operator>(compare c){
    int n1=strlen(str),n2=strlen(c.str);
    if(n1>n2){
        cout<<"first string\t"<<str<<"\t"<<"is greater than second string\t"<<c.str<<endl;
    }
    else{
        cout<<"first string\t"<<str<<"\t"<<"is smaller than second string\t"<<c.str<<endl;
    }
}
int main(){
    compare c1,c2;
    cout<<"enter first string";
    c1.get();
    cout<<"enter second string";
    c2.get();
    c1>c2;
}
