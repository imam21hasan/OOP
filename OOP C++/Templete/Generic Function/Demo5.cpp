#include <iostream>
using namespace std;
template <typename P>
void show(P a)
{
    cout << "From the template : " << a << endl;
}

void show(int x)
{
    cout << "From the normal function : " << x << endl;
}

int main()
{
    cout << "\n";
    show(15.7);
    show('S');
    show(78);
    show("SHAWON");

    getchar();
    return 0;
}