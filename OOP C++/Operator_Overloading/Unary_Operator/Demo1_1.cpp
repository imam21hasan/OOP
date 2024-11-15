#include <iostream>
using namespace std;
class Unary
{
    int a, b, c;

public:
    Unary(int x, int y, int z);

    void display();
    void operator++();
};

Unary::Unary(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
void Unary::operator++()
{
    ++a;
    a++;
    ++a;
    ++b;
    ++c;
}

void Unary::display()
{
    cout << "a : " << a << "\tb : " << b << "\tc : " << c;
}

int main()
{
    Unary ob(10, 20, 30);
    cout << "\nBefore implementation :\n";
    ob.display();

    cout << "\n\nAfter implementation :\n";
    ob.operator++();
    ob.display();

    return 0;
}