#include<iostream>
#include<conio.h>
using namespace std;
class book{
    int p,n;
    char name[20];
    public:
    void get();
    void put(book,book);
};
void book::get(){
    cout<<"enter name,price and number of pages";
    cin>>name>>n>>p;
};
void book::put(book b1,book b2){
    if(b1.p>b2.p){
        cout<<b1.name<<endl;
    }
    else{
        cout<<b2.name<<endl;
    }
}
int main(){
    book b1,b2;
    b1.get();
    b2.get(); 
    b1.put(b1,b2);
}
