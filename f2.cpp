#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    char str1[20],str2[20];
    int l1,l2;
    cout<<"enter two strings";
    cin.getline(str1,20);
    cin.getline(str2,20);
    l1=strlen(str1);
    l2=strlen(str2);
    cout<<"two strings are";
    cout.write(str1,l1);
    cout.write(str2,l2);
}
