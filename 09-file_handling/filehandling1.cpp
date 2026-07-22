#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    char c;
    cout<<"enter input text";
    while(c!='\n'){
        cin.get(c);
    }
    cout<<"output text";
    while(c!='\n'){
        cout.put(c);
    }
    getch();
}
