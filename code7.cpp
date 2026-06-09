#include <iostream>
#include <conio.h>
using namespace std;
class calc
{
    int a, b;
    friend int add(calc c)
    {
        return (c.a + c.b);
    }
    friend int sub(calc c);

public:
    friend int mult(calc c)
    {
        return (c.a * c.b);
    }
    friend float div(calc);
    void setvalue();
};
int sub(calc c)
{
    return (c.a - c.b);
}
float div(calc c)
{
    return (c.a / c.b);
}
void calc::setvalue()
{
    cout << "enter numbers";
    cin >> a >> b;
}
int main()
{
    calc c;
    c.setvalue();
    cout << add(c) << endl;
    cout << sub(c) << endl;
    cout << mult(c) << endl;
    cout << div(c) << endl;
}