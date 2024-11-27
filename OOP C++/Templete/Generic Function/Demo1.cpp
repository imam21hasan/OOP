#include <iostream>
using namespace std;

template <typename Demo1>
void show(Demo1 a, Demo1 b)
{
    cout << "\nThe value of a & b is : " << a << "\t" << b;
}
int main()
{

    show(56, 48);
    show(10.14, 26.74);
    show("Imam", "Hasan");
    show('S', 'H');

    getchar();
    return 0;
}