#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
    int a, b;

public:
    void set(int x, int y);
    void show();
    friend Complex operator+(Complex m, Complex n);
};
void Complex ::set(int x, int y)
{
    a = x;
    b = y;
}
void Complex ::show()
{
    cout << "\nThe complex number is : " << a << "+j" << b;
}
Complex operator+(Complex m, Complex n)
{
    Complex temp;
    temp.a = m.a + n.a;
    temp.b = m.b + n.b;
    return temp;
}
int main()
{
    Complex ob1, ob2, ob3;
    ob1.set(5, 9);
    ob2.set(7, 8);
    ob3 = ob1 + ob2;
    ob3.show();

    getch();
    return 0;
}