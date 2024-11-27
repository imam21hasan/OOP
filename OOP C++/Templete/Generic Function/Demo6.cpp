#include <iostream>
#include <unistd.h>
using namespace std;

template <typename T>
void show(T a, int x)
{
    for (int i = 0; i <= x; i++)
    {
        cout << a << endl;
    }
}
int main()
{
    show("SHAWON", 8);

    getchar();
    return 0;
}