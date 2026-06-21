#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char str1[20],str[20];
    cout<<"enter the string";
    cin>>str;
    ofstream fout;
    fout.open("stud");
    fout<<str;
    fout.close();
    ifstream fin;
    fin.open("stud");
    fin>>str1;
    cout<<str1;
    fin.close();

}
