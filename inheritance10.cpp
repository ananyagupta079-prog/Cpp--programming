#include<iostream>
#include<conio.h>
using namespace std;
class medicine{
    char company[30],name[30];
    public:
    void get(){
        cout<<"enter company and name";
        cin>>company>>name;
    }
    void put(){
        cout<<"company name\t"<<company<<endl;
        cout<<"medicine name\t"<<name<<endl;
    }
};
class dealer:public medicine{
    char pn[30];
    int price;
    public:
    void accept(){
        cout<<"enter product name and price";
        cin>>pn>>price;
    }
    void display(){
        cout<<"product name\t"<<pn<<endl;
        cout<<"price\t"<<price<<endl;
    }
};
class retailer:public dealer{
    int sp;
    public:
    void a(){
        cout<<"enter sell price";
        cin>>sp;
    }
    void d(){
        cout<<"selling price\t"<<sp<<endl;
    }
};
int main(){
    retailer r;
    r.get();
    r.accept();
    r.a();
    r.put();
    r.display();
    r.d();
}
