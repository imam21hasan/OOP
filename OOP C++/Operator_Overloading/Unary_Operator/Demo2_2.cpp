#include <iostream>
#include <conio.h>
using namespace std;

class AB
{
    int a;

public:
    AB(int x);
    void show();
    void operator++();
    void operator++(int);
};

AB::AB(int x)
{
    a = x;
}
void AB ::operator++()
{
    ++a;
}
void AB ::operator++(int)
{
    a++;
}
void AB ::show()
{
    cout << "a : " << a;
}

int main()
{
    AB ob(5);
    cout << "\nBefore implementation\n";
    ob.show();

    ++ob;
    cout << "\n\nAfter pre implementation\n";
    ob.show();

    ob++;
    cout << "\n\nAfter post implementation\n";
    ob.show();

    getch();
    return 0;
}