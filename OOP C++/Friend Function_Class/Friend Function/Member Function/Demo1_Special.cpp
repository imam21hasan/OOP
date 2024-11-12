#include <iostream>
#include <conio.h>
using namespace std;

class Base;

class Derived
{
public:
    void show(Base o);
};

class Base
{
    int a, b;

public:
    Base(int x, int y)
    {
        a = x;
        b = y;
    }
    friend void Derived ::show(Base o);
};
void Derived ::show(Base o)
{
    cout << "\na = " << o.a << "\t\tb= " << o.b;
}
int main()
{
    Base ob(10, 40);
    Derived ob2;
    ob2.show(ob);

    getch();
    return 0;
}