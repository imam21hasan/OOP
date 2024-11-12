#include <iostream>
#include <conio.h>
using namespace std;

class AB
{
    int a;

public:
    friend int show(AB obj);
};
int show(AB obj)
{

    obj.a = 500;
    return obj.a;
}

int main()
{
    AB ob;
    cout << "\na = " << show(ob);

    getch();
    return 0;
}