#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class bank{
    char name[20],acc_t[20];
    int accno,amt;
    public:
    bank(char n[20],int an,char at[20],int bal);
    void deposit();
    void withdrawl();
    void display();
};
bank::bank(char n[20],int an,char at[20],int bal){
        strcpy(name,n);
        accno=an;
        strcpy(acc_t,at);
        amt=bal;
}

    void bank::deposit(){
        int dep_amt;
        cout<<"enter amount to deposit";
        cin>>dep_amt;
        amt+=dep_amt;
        cout<<amt<<endl;
    }
    void bank::withdrawl(){
        int w_amt;
        cout<<"enter withdrawl amount";
        cin>>w_amt;
        amt-=w_amt;
        cout<<amt<<endl;
    }
    void bank::display(){
        cout<<"name\t"<<name<<endl<<"balance"<<amt<<endl;
    }

int main(){
    bank B("ABC",765,"FIX",10000);
    B.deposit();
    B.withdrawl();
    B.display();

}
