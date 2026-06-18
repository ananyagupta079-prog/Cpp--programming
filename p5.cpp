#include<iostream>
#include<conio.h>
using namespace std;
class unaryop{
    int n1,n2,n3;
    public:
    void get(int,int,int);
    void put();
    void operator-();
};
void unaryop::get(int a,int b,int c){
    n1=a;n2=b;n3=c;
}
void unaryop::put(){
    cout<<n1<<endl<<n2<<endl<<n3<<endl;
}
void unaryop::operator-(){
    n1=-n1;n2=-n2;n3=-n3;
}
int main(){
    unaryop up;
    up.get(10,-20,30);
    cout<<"operators\t";
    up.put();
    -up;
    up.put();
}