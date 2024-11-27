#include <iostream>
using namespace std;

template <class X>
void swapargs(X &a, X &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;
}

void swapargs(int a, int b)
{
    cout << "\n This is inside swapargs (int ,int )\n";
}
int main()
{
    int i = 10, j = 20;
    float x = 10, y = 23.3;

    cout << "\n Original i, j: " << i << "\t" << j << endl;
    cout << " Original x, y: " << x << "\t" << y << endl;

    swapargs(i, j);
    swapargs(x, y);

    cout << "\n Swapped i, j: " << i << "\t" << j << endl;
    cout << " Swapped x, y: " << x << "\t" << y << endl;

    getchar();
    return 0;
}