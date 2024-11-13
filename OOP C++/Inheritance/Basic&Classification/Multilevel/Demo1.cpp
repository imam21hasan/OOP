#include <iostream>
using namespace std;
class Grandfather
{
public:
    void display()
    {
        cout << "This is from grand father.\n";
    }
};
class Father : public Grandfather
{
public:
    void display1()
    {
        cout << "This is from father.\n";
    }
};
class Child : public Father
{
public:
    void display2()
    {
        cout << "This is from child.\n";
    }
};
int main()
{
    Child ob;
    ob.display();
    ob.display1();
    ob.display2();
}