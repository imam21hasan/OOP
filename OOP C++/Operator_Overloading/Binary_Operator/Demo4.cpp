#include <iostream>
#include <conio.h>
using namespace std;
class Legal
{
    int a, b;

public:
    Legal() {}
    Legal(int x, int y)
    {
        a = x;
        b = y;
    }
    friend Legal operator+(Legal &l, Legal &j)
    {
        Legal t;
        t.a = l.a + j.a;
        t.b = l.b + j.b;
        return t;
    }
    friend Legal operator+(Legal &l, int i)
    {
        Legal t;
        t.a = l.a + i;
        t.b = l.b + i;
        return t;
    }
    friend Legal operator+(int i, Legal &l)
    {
        Legal t;
        t.a = l.a + i;
        t.b = l.b + i;
        return t;
    }
    void show()
    {
        cout << "\na : " << a << "\tb : " << b << endl;
    }
};
int main()
{
    Legal ob(5, 8), ob2(10, 20), ob3;

    ob3 = ob + ob2;
    ob3.show();

    ob3 = ob + 60;
    ob3.show();

    ob3 = 30 + ob;
    ob3.show();

    getch();
    return 0;
}