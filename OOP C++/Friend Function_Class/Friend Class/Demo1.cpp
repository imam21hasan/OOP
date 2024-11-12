#include <iostream>
#include <conio.h>
using namespace std;

class AB
{
    string name;
    int age;

public:
    AB(string n, int a)
    {
        name = n;
        age = a;
    }
    friend class DF;
};

class DF
{
public:
    void show(AB obj)
    {
        cout << "\nName : " << obj.name << "\tAge : " << obj.age;
    }
};

int main()
{
    AB ob1("SHAWON", 20);
    DF ob2;
    ob2.show(ob1);

    getch();
    return 0;
}