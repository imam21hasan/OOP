#include <iostream>
#include <conio.h>
using namespace std;
class Unary
{
    int a, b, c;

public:
    Unary(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "a : " << a << "\tb : " << b << "\tc : " << c;
    }

    void operator++()
    {
        ++a;
        a++;
        a++;
        ++b;
        ++c;
    }
};
int main()
{
    Unary ob(10, 20, 30);
    cout << "\nBefore implementation :\n";
    ob.display();

    cout << "\n\nAfter implementation :\n";
    ob.operator++();
    ob.display();

    getch();
    return 0;
}
