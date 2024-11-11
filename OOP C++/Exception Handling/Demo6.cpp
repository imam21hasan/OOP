#include <iostream>
using namespace std;
int main()
{
    double *p;
    do
    {
        p = new (nothrow) double[100000];
        if (p)
            cout << " Allocation OK\n";
        else
            cout << " Allocation Error .\n";
    } while (p);
    return 0;
}
