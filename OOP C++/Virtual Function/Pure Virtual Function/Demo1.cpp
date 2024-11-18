#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};
class Derived_1 : public Base
{
public:
    void show()
    {
        cout << "\nDrived-1 ";
    }
};
class Derived_2 : public Base
{
public:
    void show()
    {
        cout << "\nDerived-2";
    }
};
int main()
{
    Base *p;

    Derived_1 ob1;
    Derived_2 ob2;

    p = &ob1;
    p->show();

    p = &ob2;
    p->show();

    getchar();
    return 0;
}