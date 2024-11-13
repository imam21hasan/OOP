#include <iostream>
using namespace std;
class CSE
{
public:
    void display()
    {
        cout << "I am from base CSE.\n";
    }
};
class ICT
{
public:
    void display1()
    {
        cout << "I am from base ICT.\n";
    }
};
class OOP : public CSE, public ICT
{
public:
    void display2()
    {
        cout << "I am from derived OOP.\n";
    }
};
int main()
{
    OOP ob;
    ob.display();
    ob.display1();
    ob.display2();
}