#include <iostream>
#include <conio.h>
using namespace std;
class Eq_And
{
    int a, b;

public:
    Eq_And() {}
    Eq_And(int x, int y);
    int operator==(Eq_And &obj);
    int operator&&(Eq_And &obj);
};
Eq_And ::Eq_And(int x, int y)
{
    a = x;
    b = y;
}
int Eq_And ::operator==(Eq_And &obj)
{
    return a == obj.a && b == obj.b;
}
int Eq_And ::operator&&(Eq_And &obj)
{
    return (a && obj.a) && (b && obj.b);
}

int main()
{
    Eq_And ob(10, 10), ob2(5, 7), ob3(10, 10), ob4(0, 0);

    if (ob == ob2)
        cout << "\nob & ob2 are equal.\n";
    else
        cout << "\nob & ob2 are different.\n";
    if (ob == ob3)
        cout << "ob & ob3 are equal.\n";
    else
        cout << "ob & ob3 are different.\n";
    if (ob && ob2)
        cout << "ob & ob2 are true.\n";
    else
        cout << "ob & ob3 are false.\n";
    if (ob && ob4)
        cout << "ob & ob4 are true.\n";
    else
        cout << "ob & ob4 are false.\n";

    getch();
    return 0;
}