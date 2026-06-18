#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class mystring{
    public:
    char str1[20];
    public:
    void get(){
        cin>>str1;
    }
    void operator==(mystring);
};
void mystring::operator==(mystring s){
    mystring temp1,temp2;
        int c=0,n=strlen(str1);
        strcpy(temp1.str1,str1);
        strcpy(temp2.str1,s.str1);
        for(int i=0;i<n;i++){
            if(temp1.str1[i]==temp2.str1[i]){
                c++;
            }
            if(c==n){
                cout<<"equal"<<endl;
            }
            else{
                cout<<"not equal"<<endl;
            }
        }
    }
int main(){
    mystring s1,s2;
    cout<<"enter first string";
    s1.get();
    cout<<"enter second string";
    s2.get();
    s1==s2;
}
