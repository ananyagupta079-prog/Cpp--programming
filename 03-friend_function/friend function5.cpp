#include<iostream>
#include<conio.h>
using namespace std;
class DM;
class DB{
    int i,f;
    public:
    void setvalue(int m,int n){
        i=m;f=n;
    }
    friend void add(DM,DB);
};
class DM{
    int m;
    public:
    void setvalue(int x){
        m=x;
    }
    friend void add(DM,DB);
};
void add(DM m ,DB b ){
    cout<<"addition="<<m.m+b.i<<endl<<m.m+b.f;
}
int main(){
    DM m;
    DB b;
    m.setvalue(12);
    b.setvalue(12,13);
    add(m,b);
}
