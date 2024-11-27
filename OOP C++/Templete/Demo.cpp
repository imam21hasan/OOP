#include <iostream>
using namespace std;

template <typename Demo>
void show(Demo a)
{
    cout << "\nThe value of a is : " << a;
}

int main()
{
    show(10);
    show(44.23);
    show("SHAWON");

    getchar();
    return 0;
}