#include <iostream>
using namespace std;

class father
{
public:
    string name;
    int age;

    void show1()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class son : public father
{
public:
    int id;

    void show2()
    {
        cout << "Id : " << id << endl;
        show1();
    }
};

int main()
{
    son s1;

    s1.name = "Saon";
    s1.id = 1008;
    s1.age = 21;
    s1.show2();
}