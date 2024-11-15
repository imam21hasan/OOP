#include <iostream>
#include <conio.h>
using namespace std;
class InOut
{
    char name[20];
    int age;

public:
    friend void operator>>(istream &in, InOut &input)
    {
        cout << "\nEnter name and age : ";
        in >> input.name >> input.age;
    }
    friend void operator<<(ostream &out, InOut &output)
    {
        out << "\nName : " << output.name << "\nAge : " << output.age;
    }
};
int main()
{
    InOut io;
    cin >> io;
    cout << io;

    getch();
    return 0;
}