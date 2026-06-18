#include<iostream>
#include<conio.h>
using namespace std;
class distancee{
    int feet,inches;
    public:
    void get(int f,int i);
    void put();
    void operator--();
};
void distancee::get(int f,int i){
    feet=f;inches=i;
}
void distancee::put(){
    cout<<"feet\t"<<feet<<endl<<"inches\t"<<inches<<endl;
}
void distancee::operator--(){
    inches--;
}
int main(){
    distancee d;
    d.get(10,20);
    d.put();
    --d;
    d.put();
}