#include <iostream>
#include <conio.h>
using namespace std;
class student
{
    int rno;
    char name[20];

public:
    void accept();
    void display();
};
void student::accept()
{
    cout << "enter roll no";
    cin >> rno;
    cout << "enter name";
    cin >> name;
}
void student::display()
{
    cout << "roll no" << rno << endl;
    cout << "name is" << name << endl;
}
int main()
{
    student s;
    s.accept();
    s.display();
}