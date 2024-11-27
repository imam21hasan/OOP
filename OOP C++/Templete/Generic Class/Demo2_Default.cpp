#include <iostream>
using namespace std;
template <class A = string, class B = int>
class Demo2
{
    A x;
    B y;

public:
    Demo2(A i, B j)
    {
        x = i;
        y = j;
    }
    void show()
    {
        cout << "\nx : " << x << "\t" << "y : " << y << endl;
    }
};
int main()
{
    Demo2<> ob("saon", 20);
    Demo2<char> ob2('v', 28);
    Demo2<double> ob3(36.65, 98);

    ob.show();
    ob2.show();
    ob3.show();

    getchar();
    return 0;
}