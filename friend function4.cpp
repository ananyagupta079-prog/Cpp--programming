#include<iostream>
#include<conio.h>
using namespace std;
class AB;
class XY{
    int n1;
    public:
    void setvalue(int n){
        n1=n;
    }
    friend void swap(AB,XY);
};
class AB{
    int n2;
    public:
    void setvalue(int m){
        n2=m;
    }
    friend void swap(AB,XY);
};
void swap(AB m,XY n){
    int t;
    t=m.n2;
    m.n2=n.n1;
    n.n1=t;
    cout<<m.n2<<endl<<n.n1<<endl;
}
int main(){
    AB m;XY n;
    m.setvalue(12);
    n.setvalue(32);
    swap(m,n);
}
