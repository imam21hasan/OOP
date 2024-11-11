#include <iostream>
using namespace std;

class ab
{
    int a,b;
    string s;
    public:
    ab()      // Constructor with no parameter.
    {
        cout<<"\nThis is default constructor.\n";
    }
 
    ab(int x)   // Constructor with one parameter.
    {
        cout<<"\nThis is perimeterized constructor no.1\n";
        a=x;
        cout<<"a = " <<a <<endl;
    }

    ab(string name)    // Constructor with one parameter.
    {
        cout<<"\nThis is perimeterized constructor no.2\n";
        s=name;
        cout<<"Name : " <<s <<endl;
    }

    ab(int x,int y)    // Constructor with two parameter.
    {
        cout<<"\nThis is perimeterized constructor no.3\n";
        a=x;
        b=y;
        cout<<"a = "<<a <<"\t" <<"b = "<<b <<"\t" <<"a+b = "<<a+b;
    }
};
int main()
{
    ab ob,ab1(10),ab2("Shawon"),ab3(22,33);
}