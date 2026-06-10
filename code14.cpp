#include<iostream>
#include<conio.h>
using namespace std;
class swap_a{
    int a,b;
    public:
    void setvalue(int x,int y){
        a=x;b=y;
    }
    friend void swapp(swap_a s);
};
void swapp(swap_a s){
    int t;
    t=s.a;
    s.a=s.b;
    s.b=t;
    cout<<s.a<<s.b;
}
int main(){
    swap_a sa;
    sa.setvalue(12,89);
    swapp(sa);
}