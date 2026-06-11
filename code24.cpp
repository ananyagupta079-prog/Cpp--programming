#include<iostream>
#include<conio.h>
using namespace std;
class box{
    int l,b,h;
    public:
    void get1(){
        cout<<"enter length,breadth and height";
        cin>>l>>b>>h;
    }
    void put1(){
        cout<<"legth\t"<<l<<endl<<"breadth\t"<<b<<endl<<"height\t"<<h<<endl;
    }
};
class cupboard:public box{
    int n;
    public:
    void get2(){
        cout<<"enter number of shelves";
        cin>>n;
    }
    void put2(){
        cout<<"number of shelves\t"<<n<<endl;
    }
};
int main(){
    cupboard c;
    c.get1();
    c.get2();
    c.put1();
    c.put2();
}