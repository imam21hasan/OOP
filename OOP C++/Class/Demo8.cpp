#include <iostream>
using namespace std;

class ab
{
    public:
    int id;
    double gpa;
    string name;

    void show()
    {
        cout<<id <<"   " <<name <<"   " <<gpa <<endl;
    }

    void set(int x,double y,string z)
    {
        id=x;
        gpa=y;
        name=z;
    }
};

int main()
{
    ab o1,o2;

    o1.set(1109,3.23,"nyn");
    o2.set(1110,3.36,"saon");

    o1.show();
    o2.show();
}