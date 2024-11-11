#include <iostream>
using namespace std;

class ab
{
    public:
    ab()             //constructor.
    {
        cout<<"This is constructor.\n";
    }
    ~ab()            //destructor.
    {
        cout<<"This is destructor.\n";
    }

    void fun()
    {
        cout<<"This is function.\n";
    }
};

int main()
{
    ab ob;
    ob.fun();
}