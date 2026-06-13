#include<iostream>
#include<conio.h>
using namespace std;
class publ{
    char title[30];
    int p;
    public:
    void get(){
        cout<<"enter title and price";
        cin>>title>>p;
    }
    void put(){
        cout<<"title\t"<<title<<endl;
        cout<<"price\t"<<p<<endl;
    }
};
class book:public publ{
    char author[30];
    public:
    void accept(){
        cout<<"enter author name";
        cin>>author;
    }
    void display(){
        cout<<"author name\t"<<author<<endl;
    }
};
class audio_case:public publ{
    int pt;
    public:
    void g(){
        cout<<"enter playing time";
        cin>>pt;
    }
    void p(){
        cout<<"playing time\t"<<pt<<endl;
    }
};
int main(){
    book b;
    audio_case a;
    a.get();
    b.accept();
    a.g();
    a.put();
    b.display();
    a.p();
}