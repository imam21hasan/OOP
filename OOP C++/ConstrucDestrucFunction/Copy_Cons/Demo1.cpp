#include <iostream>
using namespace std;

class Demo1
{
    int a,b;
    public:
    Demo1()
    {
        cout<<"This is default cons"<<endl;
    }
    Demo1(int x,int y)
    {
        a=x;
        b=y;
        cout<<"This is parameterized cons" <<endl;
        cout<<"a : "<<a <<"\tb : "<<b;
    }

    Demo1(const Demo1 & ob3)
    {
        a=ob3.a;
        b=ob3.b;
        cout<<"\nThis is copy cons."<<endl;
        cout<<"a : "<<a <<"\tb : "<<b;

    }
};
int main()
{
    Demo1 ob;
    Demo1 ob1(10,20);
    Demo1 ob2(ob1);

    getchar();
}