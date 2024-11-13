#include <iostream>
using namespace std;
class base
{
    int i;

public:
    base(int n)
    {
        cout << " Constructing base class \n";
        i = n;
    }
    ~base()
    {
        cout << " Destructing base class \n";
    }
    void showi()
    {
        cout << " " << i << endl;
    }
};
class derived : public base
{
    int j;

public:
    derived(int n) : base(n)
    {
        cout << " Constructing derived class \n";
        j = n;
    }
    ~derived()
    {
        cout << " Destructing derived class \n";
    }
    void showj()
    {
        cout << " " << j << endl;
    }
};
int main()
{
    derived o(10);
    o.showi();
    o.showj();
    return 0;
}