#include <iostream>
using namespace std;

class ab
{
    int a,b;
    
    public:

    ab(int x,int y)
    {
        cout<<"This is parameterized constructor.\n";
        a=x;
        b=y;
    }
    
    ab(const ab &ob)       //copy constructor
    {
        cout<<"This is copy constructor.\n";
        a=ob.a;
        b=ob.b;
    }
    
    void show()
    {
        cout<<"a = "<<a <<"\t" <<"b = "<<b <<"\t" <<"a*b = "<<a*b <<"\n\n";
    }
};

int main()
{
    ab ob(10,20);
    ob.show();

    ab ob2(ob);
    ob2.show();
}