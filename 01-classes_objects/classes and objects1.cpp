#include <iostream>
#include <conio.h>
using namespace std;
class Time
{
    int hr, min, sec;

public:
    void accept();
    void convert();
};
void Time::accept()
{
    cout << "enter time in minutes";
    cin >> min;
}
void Time::convert()
{
    hr = min / 60;
    sec = min * 60;
    cout << hr << endl;
    cout << sec << endl;
}
int main()
{
    Time t;
    t.accept();
    t.convert();
}
