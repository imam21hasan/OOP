#include <iostream>
#include <conio.h>
using namespace std;
class Three
{
    int a;

public:
    Three() {}
    Three(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "\nValue of a after operation : " << a;
    }
    friend Three operator+(Three obj, int i);
};
Three operator+(Three obj, int i)
{
    Three t;
    t.a = obj.a + i;
    return t;
}

int main()
{
    Three ob(5), ob1(15), ob2;

    ob2 = ob + 17;
    ob2.show();

    ob2 = ob1 + 45;
    ob2.show();

    getch();
    return 0;
}