#include <iostream>
#include <conio.h>
using namespace std;

class AB
{
    int a, b;

public:
    AB(int z, int y)
    {
        a = z;
        b = y;
    }
    friend void show(AB obj);
};
void show(AB obj)
{
    cout << "\na = " << obj.a << "\t\tb = " << obj.b;
}

int main()
{
    int p, q;
    cout << "\nEnter two number : ";
    cin >> p >> q;

    AB ob(p, q);
    show(ob);

    getch();
    return 0;
}