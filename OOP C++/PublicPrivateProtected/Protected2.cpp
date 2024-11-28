#include <iostream>
using namespace std;
class demo
{
    int a;

protected:
    int b;

public:
    int c;
    demo(int n, int m)
    {
        a = n;
        b = m;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};
int main()
{
    demo ob(10, 20);
    ob.c = 30;
    cout << ob.geta() << "   ";
    cout << ob.getb() << "   " << ob.c << endl;
    return 0;
}