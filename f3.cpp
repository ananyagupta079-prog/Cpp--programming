#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    cout<<"before precision"<<endl;
    cout<<12.123<<endl;
    cout<<"after precision"<<endl;
    cout.precision(2);
    cout<<12.123<<endl;
}