#include<iostream>
#include<conio.h>
using namespace std;
class Distance{
    int dis1,dis2,dis3;
    public:
    Distance(int a,int b);
    void display();
};
Distance::Distance(int a,int b){
    dis1=a;dis2=b;
}
void Distance::display(){
    dis3=dis1+dis2;
    cout<<dis3<<endl;
}
int main(){
    Distance d1(60,120);
    d1.display();
}