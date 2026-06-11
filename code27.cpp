#include<iostream>
#include<conio.h>
using namespace std;
class account{
    int an;
    float bal;
    public:
    void get();
    void put();
};
void account::get(){
    cout<<"enter account no and balance";
    cin>>an>>bal;
}
void account::put(){
    if(bal>5000)
    cout<<"account number\t"<<an<<endl<<"balance\t"<<bal<<endl;
}
int main(){
    account a[10];
    int i;
    for(i=0;i<10;i++){
        a[i].get();
    }
    for(i=0;i<10;i++){
        a[i].put();
    }
}