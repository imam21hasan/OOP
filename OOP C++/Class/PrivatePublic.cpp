#include <iostream>
using namespace std;

class ab
{
    int a,b;

    public:

    void set(int x,int y);
    void get();
};

void ab :: set(int x,int y)
{
    a=x;
    b=y;
}

void ab :: get()
{
    cout<<"The sum is : " <<(a+b);
}

int main()
{
    ab ob;
    ob.set(10,20);
    ob.get();
}