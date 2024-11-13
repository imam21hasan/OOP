#include <iostream>
using namespace std;
class Animal
{
public:
    void display()
    {
        cout << "\nThis is animal.\n";
    }
};
class Mammal : public Animal
{
public:
    void display2()
    {
        cout << "This is mammal.\n";
    }
};
class Herbivores
{
public:
    void display3()
    {
        cout << "This is herbivores.\n";
    }
};
class Cow : public Mammal, public Herbivores
{
public:
    void display4()
    {
        cout << "This is cow.\n";
    }
};

int main()
{
    Mammal ob;
    ob.display();
    ob.display2();

    Herbivores ob3;
    ob3.display3();

    Cow op;
    op.display();
    op.display2();
    op.display3();
    op.display4();
}