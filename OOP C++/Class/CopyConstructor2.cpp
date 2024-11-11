#include <iostream>
using namespace std;

class ab
{
    int a,b;

    public:

    ab()
    {
        cout<<"\nThis is default constructor.\n\n";
    }

    ab(int x,int y)
    {
        a=x;
        b=y;

        cout<<"This is parameterized constructor.\n";
        cout<<"a = " <<a <<"\t" <<"b = " <<b <<"\n\n";
    }

    ab(const ab &ob2)
    {
        a=ob2.a;
        b=ob2.b;
        cout<<"This is copy constructor.\n";
        cout<<"\t" <<"a+b = " <<a+b <<"\n\n";
    }
    ab(const ab &ob4,int c)
    {
        a=ob4.a;
        b=ob4.b;
        cout<<"This is another copy constructor.\n";
        cout<<"a+b = " <<a+b <<"\t" <<"b+c = "<<b+c <<"\n\n";
    }

};

int main()
{
    ab ob;
    ab ob1(10,5);
    ab ob2(ob1);
    ab ob3(ob1,5);
}