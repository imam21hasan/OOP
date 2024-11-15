#include <iostream>
#include <conio.h>
using namespace std;
class AB
{
    int a;

public:
    AB(int x)
    {
        a = x;
    }
    void show();
    friend void operator++(AB &obj);
};
void AB ::show()
{
    cout << "a : " << a;
}
void operator++(AB &obj)
{

    ++obj.a;
    ++obj.a;
    obj.a++;
}

int main()
{
    AB ob(5);
    cout << "\nBefore implementation";
    ob.show();

    cout << "\n\nAfter implementation";
    ++ob;
    ob.show();

    getch();
    return 0;
}
