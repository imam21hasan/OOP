#include <iostream>
using namespace std;

template <typename AB, typename CD, typename EF>
void show(AB a, CD b, EF c)
{
    cout << "\nThe value of a ,b & c is : " << a << "\t" << b << "\t" << c;
}
int main()
{
    show(45, 89, 47);
    show(10, 'S', "CSTU");
    show("Shawon", 'H', 20);
    show(23.65, 55, 'H');
    show('N', "Hasan", "SADIN");

    getchar();
    return 0;
}