#include<iostream>
#include<conio.h>
using namespace std;
class furniture{
    int p;
    char m[20];
    public:
    void get1(){
        cout<<"enter material name and price";
        cin>>m>>p;
    }
    void put1(){
        cout<<"material\t"<<m<<endl<<"price\t"<<p<<endl;
    }
};
class table:public furniture{
    int h,sa;
    public:
    void get2(){
        cout<<"enter height and surface_area";
        cin>>h>>sa;
    }
    void put2(){
        cout<<"height\t"<<h<<endl<<"suraface_area\t"<<sa<<endl;
    }
};
int main(){
    table t;
    t.get1();
    t.get2();
    t.put1();
    t.put2();
}
