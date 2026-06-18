#include<iostream>
#include<conio.h>
using namespace std;
class test_1;
class test_2{
    int t2;
    public:
      void accept(){
        cout<<"enter marks";
        cin>>t2;
      }
      friend void avg(test_1,test_2);
};
class test_1{
    int t1;
    public:
    void accept(){
        cout<<"enter marks";
        cin>>t1;
    }
    friend void avg(test_1,test_2);
};
void avg(test_1 m1,test_2 m2){
    cout<<(m1.t1+m2.t2)/2<<endl;
}
int main(){
    test_1 t1;
    test_2 t2;
    t1.accept();
    t2.accept();
    avg(t1,t2);
}
