#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << " Constructing base class \n";
    }
    ~base()
    {
        cout << " Destructing base class \n";
    }
};
class derived : public base
{
    int j;

public:
    derived(int n)
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
    o.showj();
    return 0;
}