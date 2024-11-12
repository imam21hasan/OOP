#include <iostream>
#include <conio.h>
using namespace std;

class AB
{
    int a, b;

public:
    AB()
    {
        a = 100;
        b = 200;
    }
    friend void show(AB obj);
};
void show(AB obj)
{
    cout << "\na = " << obj.a << "\t\tb = " << obj.b;
}

int main()
{
    AB ob;

    show(ob);

    getch();
    return 0;
}