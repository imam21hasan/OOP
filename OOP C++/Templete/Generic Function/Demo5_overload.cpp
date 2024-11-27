#include <iostream>
using namespace std;
template <typename T1>
void show(T1 t1)
{
    cout << "From T1 : " << t1 << endl;
}
template <typename T2, typename T3>
void show(T2 t2, T3 t3)
{
    cout << "From T2 & T3 : " << t2 << "\t" << t3 << endl;
}
template <typename P1, typename P2, typename P3>
void show(P1 p1, P2 p2, P3 p3)
{
    cout << "From P1,P2 & P3 : " << p1 << "\t" << p2 << "\t" << p3 << endl;
}

int main()
{
    cout << "\n";

    show("SHWADHEEN");
    show("SHAWON", "NAYON");
    show("FARUK", "FIROZ", "FORHAD");
    show(28.25);
    show(10, 33.33);
    show(28, 10, 2003);

    getchar();
    return 0;
}