#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Car
{
private:
    string name;
    int cost;

public:
    Car(string n, int c)
    {
        name = n;
        cost = c;
    }
    bool operator==(const Car &c)
    {
        if (name == c.name && cost == c.cost)
            return true;
        return false;
    }
};
int main()
{
    Car car1("Santro", 50);
    Car car2("Santro", 900);
    if (car1 == car2)
        cout << "\nEquivalent";
    else
        cout << "\nNot Equivalent";

    getch();
    return 0;
}
