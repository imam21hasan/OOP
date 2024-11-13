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

class BBA : public Department
{
public:
    void display3()
    {
        cout << "This is from BBA.\n";
    }
};

int main()
{
    CSE ob;
    ob.display();
    ob.display1();

    ICT ob2;
    // ob2.display();
    ob2.display2();

    BBA ob3;
    // ob3.display();
    ob3.display3();

    return 0;
}