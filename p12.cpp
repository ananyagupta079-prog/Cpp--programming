#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class conc{
    char str[20];
    public:
    void get(){
        cin>>str;
    }
    void operator+(conc);
};
void conc::operator+(conc c){
    strcat(str,c.str);
    cout<<str<<endl;
}
int main(){
    conc c1,c2;
    cout<<"enter first string";
    c1.get();
    cout<<"enter second string";
    c2.get();
    c1+c2;
}