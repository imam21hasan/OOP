#include <iostream>
#include <conio.h>
using namespace std;

class ABC;

class XYZ
{
    int x;

public:
    XYZ(int m)
    {
        x = m;
    }
    friend void show(ABC p, XYZ q);
};
class ABC
{
    int a;

public:
    ABC(int n)
    {
        a = n;
    }
    friend void show(ABC p, XYZ q);
};
void show(ABC p, XYZ q)
{
    if (p.a > q.x)
        cout << "\na = " << p.a;
    else
        cout << "\nx = " << q.x;
}

int main()
{
    int e, f;
    cout << "\nEnter two number : ";
    cin >> e >> f;
    ABC ob(e);
    XYZ ob2(f);

    show(ob, ob2);

    getch();
    return 0;
}