#include <iostream>
#include <conio.h>
using namespace std;
class employee
{
    int emp_id;
    char desg[20];
    float sal;

public:
    void accept();
    void display();
};
void employee::accept()
{
    cout << "enter the emp_id";
    cin >> emp_id;
    cout << "enter the designation";
    cin >> desg;
    cout << "enter the salary";
    cin >> sal;
}
void employee::display()
{
    cout << "empid" << emp_id << endl
         << "designation" << desg << endl
         << "salary" << sal << endl;
}
int main()
{
    employee e;
    e.accept();
    e.display();
}
