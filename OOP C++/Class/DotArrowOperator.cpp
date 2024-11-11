#include <iostream>
using namespace std;

class ab
{
    public:
    int id;
    double gpa;
    string name;

    void get()
    {
        cout<<id <<"  " <<name <<"  " <<gpa <<endl;
    }
};

int main()
{
    ab o1,o2;
    o1.id=1001;
    o1.gpa=3.56;          // dot (.)  operator.
    o1.name="Saon";
    o1.get();

    ab *p=&o2;
    p->id=1002;
    p->gpa=3.71;           // arrow (->)  operator.
    p->name="Nayon";
    p->get();
}