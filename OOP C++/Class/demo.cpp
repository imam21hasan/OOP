#include <iostream>
using namespace std;

class cstu
{
    public:
    int id;
    double gpa;

    void display()
    {
        cout<<id <<"  " <<gpa <<endl;
    }
};

int main()
{
    cstu a,b;
    a.id=1011;
    a.gpa=3.44;
    b.id=1010;
    b.gpa=3.29;

    a.display();
    b.display();

    return 0;
}

