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
        cout << "\nThe complex number is : " << a << "+j" << b;
    }
    friend Complex operator+(Complex m, Complex n)
    {
        Complex temp;
        temp.a = m.a + n.a;
        temp.b = m.b + n.b;
        return temp;
    }
};
int main()
{
    Complex ob1(5, 7);
    Complex ob2(7, 8);
    Complex ob3 = ob1 + ob2;
    ob3.show();

    getch();
    return 0;
}