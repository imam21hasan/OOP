#include <iostream>
using namespace std;

template <class A, class B>
class AB
{
    A i;
    B j;

public:
    AB(A x, B y)
    {
        i = x;
        j = y;
    }
    void show()
    {
        cout << "\nValue of i & j : " << i << "\t" << j << endl;
    }
};
int main()
{
    AB<int, double> ob1(10, 23.56);
    AB<char, string> ob2('H', "shawon");
    AB<double, char> ob3(45.3, 'N');

    ob1.show();
    ob2.show();
    ob3.show();

    getchar();
    return 0;
}
