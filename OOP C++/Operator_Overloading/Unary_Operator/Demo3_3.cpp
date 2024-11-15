#include <iostream>
#include <conio.h>
using namespace std;
class AB
{
    int a;

public:
    AB(int x = 10)
    {
        a = x;
    }

    AB operator++();
    void show();
};
AB AB ::operator++()
{
    AB temp;
    temp = ++a;
    return temp;
}
void AB ::show()
{
    cout << "a : " << a;
}
int main()
{
    AB ob1, ob2;

    cout << "\nBefore implementation";
    ob1.show();

    cout << "\n\nAfter implementation";
    ob2 = ++ob1;
    ++ob2;

    ob2.show();

    getch();
    return 0;
}