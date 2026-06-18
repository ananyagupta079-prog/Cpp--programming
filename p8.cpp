#include<iostream>
#include<conio.h>
using namespace std;
class addition{
    int num1,num2;
    public:
    addition(){};
    addition(int p,int q){
        num1=p;num2=q;
    }
    addition operator+(addition);
    void display();
};
addition addition::operator+(addition ad){
    addition t;
    t.num1=num1+ad.num1;
    t.num2=num2+ad.num2;
    return(t);
}
void addition::display(){
    cout<<"num1\t"<<num1<<endl;
    cout<<"num2\t"<<num2;
}
int main(){
    addition ad1,ad2,ad3;
    ad1=addition(3,4);
    ad2=addition(6,7);
    ad3=ad1+ad2;
    ad3.display();
}