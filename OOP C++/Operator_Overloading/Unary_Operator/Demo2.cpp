#include <iostream>
#include <conio.h>
using namespace std;

class AB
{
    int a;

public:
    AB(int x)
    {
        a = x;
    }

    void show()
    {
        cout << "a : " << a;
    }

    void operator++()
    {

        ++a;
    }

    void operator++(int)
    {
        a++;
    }
};

int main()
{
    AB ob(5);
    cout << "\nBefore implementation\n";
    ob.show();

    ++ob;
    cout << "\n\nAfter pre implementation\n";
    ob.show();

    ob.operator++();
    cout << "\n\nAfter post implementation\n";
    ob.show();

    getch();
    return 0;
}