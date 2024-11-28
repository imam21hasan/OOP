#include <iostream>
using namespace std;
class base
{
protected:
    int a, b;

public:
    void setab(int n, int m)
    {
        a = n;
        b = m;
    }
};
class derived : public base
{
    int c;

public:
    void setc(int n)
    {
        c = n;
    }
    void showbc()
    {
        cout << a << "\t" << b << "\t" << c << endl;
    }
};
int main()
{
    derived ob;

    ob.setab(1, 2);
    ob.setc(3);
    ob.showbc();
    return 0;
}