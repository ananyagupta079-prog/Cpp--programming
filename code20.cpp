#include<iostream>
#include<conio.h>
using namespace std;
class salary{
    float basic,TA,DA,HRA;
    public:
    salary(float,float,float,float);
    void display();
};
salary::salary(float ta,float b,float da=200,float hra=400){
    basic=b;
    TA=(basic*ta)/100;
    HRA=(basic*hra)/100;
    DA=(basic*da)/100;
}
void salary::display(){
    cout<<"total\t"<<basic+DA+HRA+TA<<endl;
}
int main(){
    salary s(110,6000);
    s.display();
}