#include <iostream>
#include <conio.h>
using namespace std;
class weight
{
    float m;
    static float g;

public:
    void accept();
    void display();
};
float weight::g = 9.8;
void weight::accept()
{
    cout << "enter the mass";
    cin >> m;
    cout << "enter gravitational force";
    cin >> g;
}
void weight::display()
{
    float w = m * g;
    cout << w;
}
int main()
{
    weight w;
    w.accept();
    w.display();
}