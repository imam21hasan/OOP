#include <iostream>
using namespace std;

class ab
{
    protected:
    int a,b;
};

class ab2 : public ab
{
    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void get()
    {
        cout<<a <<"\t" <<b <<"\t" <<a+b;
    }
};

int main()
{
    int m,n;
    cout<<"Enter the value of m & n : ";
    cin>>m >>n;
    ab2 ob;

    ob.set(m,n);
    ob.get();
}