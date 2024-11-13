#include <iostream>
using namespace std;
class University
{
public:
    University()
    {
        cout << "This is base constructor.\n";
    }
    void display()
    {
        cout << "This is base function.\n";
    }
};
class CSE : public University
{
public:
    CSE()
    {
        cout << "This is derived constructor.\n";
    }
    void display1()
    {
        display();
        cout << "This is derived function.\n";
    }
};

int main()
{
    CSE ob;
    // ob.display();
    ob.display1();
}