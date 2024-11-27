#include <iostream>
using namespace std;
template <class A>
class Demo3
{
    A x;

public:
    Demo3(A i)
    {
        x = i;
    }
    void show()
    {
        cout << "From templete : " << x << endl;
    }
};
template <>
class Demo3<int>
{
    int x;

public:
    Demo3(int i)
    {
        x = i;
    }
    void show()
    {
        cout << "From normal : " << x << endl;
    }
};
int main()
{
    cout << "\n";
    Demo3<string> ob("saon");
    Demo3<char> ob2('S');
    Demo3<int> ob3(45);

    ob.show();
    ob2.show();
    ob3.show();

    getchar();
    return 0;
}