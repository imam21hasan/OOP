#include <iostream>
using namespace std;

class Department
{
public:
    void display()
    {
        cout << "This is from Department.\n";
    }
};

class CSE : public Department
{
public:
    void display1()
    {
        cout << "This is from CSE.\n";
    }
};

class ICT : public Department
{
public:
    void display2()
    {
        cout << "This is from ICT.\n";
    }
};

class Varsity : public CSE, public ICT
{
public:
    void display3()
    {
        cout << "This is from Varsity.\n";
    }
};

int main()
{
    Varsity ob;
    ob.CSE::display();
    ob.display3();
    ob.ICT::display();

    return 0;
}