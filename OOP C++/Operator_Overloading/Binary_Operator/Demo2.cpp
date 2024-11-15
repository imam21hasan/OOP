#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "\nThe complex number is : " << a << "+j" << b;
    }
    Complex operator+(Complex m);
};
Complex Complex ::operator+(Complex m)
{
    Complex t;
    t.a = a + m.a;
    t.b = b + m.b;

    return t;
}
int main()
{
    Complex c1, c2, c3;
    c1.set(4, 6);
    c2.set(7, 4);
    c3 = c1 + c2;
    c3.show();

    getch();
    return 0;
}