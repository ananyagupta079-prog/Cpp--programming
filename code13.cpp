#include<iostream>
#include<conio.h>
using namespace std;
class fraction{
    int num;
    int deno;
    public:
    fraction(int a,int b);
    void display();
};
fraction::fraction(int a,int b){
    num=a;deno=b;
};
void fraction::display(){
    cout<<"fraction\t"<<float(num)/deno<<endl;
}
int main(){
    fraction f1(5,2);
    f1.display();
}