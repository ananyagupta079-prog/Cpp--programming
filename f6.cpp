#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(){
    int nl=0,sp=0,tb=0;
    char ch;
    fstream ff;
    ff.open("stud.cpp",ios::in|ios::out);
    ff.seekg(0);
    while(ff){
        ff.get(ch);
        if(ch=='\n'){
            nl++;
        }
        if(ch=='\t'){
            tb++;
        }
        if(ch==' '){
            sp++;
        }
    }
    cout<<nl<<endl<<sp<<endl<<tb<<endl;
}