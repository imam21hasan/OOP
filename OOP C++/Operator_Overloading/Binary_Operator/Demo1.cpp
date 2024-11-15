#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex() {}
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "\nThe complex number is :  " << a << "+j" << b;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main()
{
    Complex c1(5, 6);
    Complex c2(2, 3);
    Complex c3 = c1.operator+(c2);
    c3.show();

    getch();
    return 0;
}
