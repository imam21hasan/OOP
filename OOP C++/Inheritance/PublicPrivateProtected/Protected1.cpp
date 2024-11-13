#include <iostream>
using namespace std;

class base
{
protected:
    int a, b;
};

class ab : public base
{
public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void get()
    {
        cout << a << "\t" << b;
    }
};

int main()
{
    ab ob;
    ob.set(11, 12);
    ob.get();
}
