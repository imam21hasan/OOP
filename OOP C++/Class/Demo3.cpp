#include <iostream>
using namespace std;

class ab
{
    public:
    int c;

    void result(int m,int n)
    {
        c=m+n;

        cout<<"The result is : "<<c;
    }
};

int main()
{
    ab ob;
    int a,b;
    cout<<"Enter the value of a & b : ";
    cin>>a >>b;

    ob.result(a,b);

    return 0;
}