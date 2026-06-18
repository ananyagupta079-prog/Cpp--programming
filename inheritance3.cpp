#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class product{
    int p_id;
    char name[20];
    public:
    void get1(){
        cout<<"enter product id and name";
        cin>>p_id>>name;
    }
    void put1(){
        cout<<"product id\t"<<p_id<<endl<<"name\t"<<name<<endl;
    }
};
class edible:public product{
    public:
    int w,p;
    char f[20];
    public:
    void get2(){
        cout<<"enter weight,price and flavor";
        cin>>w>>p>>f;
    }
    void put2(){
        cout<<"weight\t"<<w<<endl<<"price\t"<<p<<endl<<"flavor\t"<<f<<endl;
    }
};
int main(){
    edible e;
    e.get1();
    e.get2();
    if(strcmp(e.f,"sweet")==0){
        e.put1();
        e.put2();
    }
}
