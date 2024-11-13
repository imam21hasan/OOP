#include <iostream>
using namespace std;

class ab
{
public:
    string name;
    int age;

    void get1()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class son : public ab
{
    int id;

public:
    void set(int x)
    {
        id = x;
    }

    void get2()
    {
        cout << "Id : " << id << endl;
        get1();
    }
};

int main()
{
    son s1;
    s1.name = "Saonnnn";
    s1.age = 20;
    s1.set(1001);

    s1.get2();
}