#include<iostream>
#include<conio.h>
#include<cstring>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char str[20],c;
    int i;
    cout<<"enter the string";
    cin>>str;
    fstream f;
    f.open("stud.cpp",ios::in|ios::out);
    for(i=0;i<strlen(str);i++){
        f.put(str[i]);
    }
    f.seekg(0);
    while(f){
        f.get(c);
        cout<<c;
    }
}
