#include <iostream>
#include <conio.h>
using namespace std;
class Uf
{
    int a, b;

public:
    Uf() {}
    Uf(int x, int y)
    {
        a = x;
        b = y;
    }
    friend Uf operator++(Uf &u)
    {
        u.a++;
        u.b++;
        return u;
    }
    friend Uf operator++(Uf &u, int)
    {
        u.a++;
        u.b++;
        return u;
    }
    void show()
    {
        cout << "\na = " << a << "\nb = " << b;
    }
};
int main()
{
    Uf ob(10, 20);
    cout << "\nPre increment operation";
    ++ob;
    ob.show();

    cout << "\n\nPost increment operation";
    ob++;
    ob.show();

    getch();
    return 0;
}