#include <iostream>
using namespace std;

class ab
{
    int a,b;
    public:
    ab()
    {
        cout<<"\nThis is default.\n";
    }
    ab(int x,int y)
    {
        a=x;
        b=y;
        cout<<"This is parameterized cons.\n";
        cout<<a <<"\t" <<b;
    }
    ab(const ab & ob)
    {
        a=ob.a;
        b=ob.b;
        cout<<"\nThis is copy-1 cons.\n";
        cout<<a <<"\t" <<b;
    }
    ab(const ab & ob,int p)
    {
        a=ob.a;
        b=ob.b;
        cout<<"\nThis is copy-2 cons.\n";
        cout<<a <<"\t" <<b <<"\tP : "<<p;
    }
};

int main()
{
    ab ob,ob1(10,20),ob2(ob1),ob3(ob1,50);

    getchar();
}