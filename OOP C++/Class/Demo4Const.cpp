#include <iostream>
using namespace std;

class ab
{
    public:
    double m;
    ab(double a,double b,double c,double d)    //parameterized construcor
    {
        m=(a+b+c+d)/4;

        cout<<"The result is : "<<m;
    }
};

int main()
{
    double p,q,r,s;
    cout<<"Enter the four numbers : ";
    cin>>p >>q >>r >>s;

    ab ob(p,q,r,s);

    return 0;

}