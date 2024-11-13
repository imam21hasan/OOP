#include <iostream>
using namespace std;
class Father
{
    public:
    void home()
    {
        cout<<"HOME\n";
    }
    void style()
    {
        cout<<"STYLE\n";
    }
};
class Child : public Father
{
    public:
    void func()
    {
        cout<<"FUNCTION\n";
        home();
        style();
    }
};

int main()
{
    Child ob;
    ob.home();
    ob.style();
    ob.func();

    return 0;
}