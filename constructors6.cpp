#include<iostream>
#include<conio.h>
using namespace std;
class linear{
    int v1,v2;
    public:
    linear(int,int);
    void display();
};
linear::linear(int a,int b){
    v1=a,v2=b;
}
void linear::display(){
    cout<<v1<<"x\t"<<"+\t"<<v2<<"y\t"<<"=\t"<<v1+v2<<endl;
}
int main(){
    linear l(3,6);
    l.display();
}
