#include <iostream>
#include <conio.h>
using namespace std;
class addition
{
    int a, b;

public:
    friend void add(addition ad);
};
void add(addition ad)
{
    cout << "enter two numbers";
    cin >> ad.a >> ad.b;
    cout << ad.a + ad.b;
}
int main()
{
    addition a;
    add(a);
}
