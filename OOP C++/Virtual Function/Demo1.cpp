#include <iostream>
#include <conio.h>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "\nShow base class.";
    }
    void print()
    {
        cout << "\nPrint base class.";
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "\nShow derived class.";
    }
    void print()
    {
        cout << "\nPrint derived class.";
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;

    b->show(); 
    b->print();
    
    getch();
    return 0;
}