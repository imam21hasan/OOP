#include <iostream>
#include <conio.h>
using namespace std;
class Equal
{
    int a, b;

public:
    Equal(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << "+i" << b;
    }
    void operator=(Equal e)
    {
        a = e.a;
        b = e.b;
    }
};
int main()
{
    Equal ob(5, 8), ob2(6, 10);
    cout << "\nBefore overloading assignmentoperator.\n";
    cout << "ob complex number : ";
    ob.show();
    cout << "\nob2 complex number : ";
    ob2.show();

    ob2 = ob;
    cout << "\n\nAfter overloading assignmentoperator.\n";
    cout << "\nob complex number : ";
    ob.show();
    cout << "\nob2 complex number : ";
    ob2.show();

    getch();
    return 0;
}