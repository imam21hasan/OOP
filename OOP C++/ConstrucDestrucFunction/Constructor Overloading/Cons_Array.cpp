#include <iostream>
#include <conio.h>
using namespace std;

class Demo1
{
    int n;

public:
    Demo1()
    {
        n = 0;
    }
    Demo1(int x)
    {
        n = x;
    }
    int getX()
    {
        return n;
    }
    void setX(int a)
    {
        n=a;
    }
};
int main()
{
    Demo1 ob[5];
    Demo1 ob2[5] = {10, 20, 30, 40, 50};

    cout << "Enter first array elements : ";
    int val;
    for (int i = 0; i < 5; i++)
    {
        cin>>val;
        ob[i].setX(val);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "ob[" << i << "] = " << ob[i].getX() << endl;
        cout << "ob2[" << i << "] = " << ob2[i].getX() << "\n\n";
    }

    getch();
    return 0;
}