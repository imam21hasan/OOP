#include <iostream>
using namespace std;
class Animal
{
public:
    Animal()
    {
        cout << "This is animal Constructor.\n";
    }
};
class Mammal : public Animal
{
public:
    Mammal()
    {
        cout << "This is mammal Constructor.\n";
    }
};
class Herbivores
{
public:
    Herbivores()
    {
        cout << "This is herbivores Constructor.\n";
    }
};
class Cow : public Mammal, public Herbivores
{
public:
    Cow()
    {
        cout << "This is cow Constructor.\n";
    }
};

int main()
{
    Cow ob;
}