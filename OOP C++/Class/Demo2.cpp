#include <iostream>
using namespace std;
 class cstu
 {
    public:
    int id;
    double gpa;

    void display()
    {
        cout<<"ID : "<<id <<"    " <<"GPA : "<<gpa <<endl;
    }

    void setValue(int x,double y)
    {
        id=x;
        gpa=y;
    }
 };

 int main()
 {
    cstu a,b;
    a.setValue(1011,3.94);
    b.setValue(1010,3.43);

    a.display();
    b.display();

    return 0;

 }