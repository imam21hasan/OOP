#include <iostream>
using namespace std;

class ab
{
    int a, b;

public:
    ab() {};                         
    ab(int x, int y) : a(x), b(y) {};
    void fun();
};

void ab ::fun()
{
    cout << " a = " << a << "\t" << " b = " << b << "\n a+b = " << a + b << endl;
}

int main()
{
    ab ob;
    ab ob1(77, 99);
    ob1.fun();
}