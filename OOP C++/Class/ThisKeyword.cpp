#include <iostream>
using namespace std;

class my
{
    public:
    int id;
    double gpa;
    string name;

    void set(int id,double gpa,string name);
    void show();
};

void my::set(int id,double gpa,string name)
{
    this -> id=id;
    this -> gpa=gpa;
    this -> name=name;
}
void my::show()
{
    cout<<id <<"  " <<gpa <<"  " <<name <<endl;
}

int main()
{
    my ob1,ob2;

    ob1.set(1101,3.56,"Saon");
    ob2.set(1102,3.64,"Nayon");

    ob1.show();
    ob2.show();
}