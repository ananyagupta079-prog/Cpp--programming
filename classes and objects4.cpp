#include <iostream>
#include <conio.h>
using namespace std;
class book
{
public:
    char name[20];
    float price;
    int pages;
    void accept();
    void display();
};
void book::accept()
{
    cout << "enter name";
    cin >> name;
    cout << "enter price";
    cin >> price;
    cout << "enter pages";
    cin >> pages;
}
void book::display()
{
    cout << "name is" << name << endl
         << "price" << price << endl
         << "number of pages" << pages << endl;
}
int main()
{
    book b1, b2;
    b1.accept();
    b2.accept();
    if (b1.price > b2.price)
    {
        cout << b1.name;
    }
    else
    {
        cout << b2.name;
    }
}
