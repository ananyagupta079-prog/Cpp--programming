#include <iostream>
#include <conio.h>
using namespace std;
class si
{
    int p, n;
    static int r;

public:
    void accept();
    void display();
};
int si::r = 10;
void si::accept()
{
    cout << "enter principles";
    cin >> p;
    cout << "enter duration";
    cin >> n;
    cout << "enter rate of interset";
    cin >> r;
}
void si::display()
{
    int s = (p * r * n) / 100;
    cout << s;
}
int main()
{
    si s;
    s.accept();
    s.display();
}