#include <iostream>
using namespace std;

#define SIZE 10

template <class StackType>
class stack
{
    StackType stck[SIZE];
    int tos;

public:
    void init() { tos = 0; }
    void push(StackType ch);
    StackType pop();
};
template <class StackType>
void stack<StackType>::push(StackType ob)
{
    if (tos == SIZE)
    {
        cout << " Stack is full .\n";
        return;
    }
    stck[tos] = ob;
    tos++;
}
template <class StackType>
StackType stack<StackType>::pop()
{
    if (tos == 0)
    {
        cout << " Stack is empty .\n";
        return 0;
    }
    tos--;
    return stck[tos];
}
int main()
{
    stack<char> s1, s2;
    int i;
    s1.init();
    s2.init();

    s1.push('a');
    s2.push('x');

    s1.push('b');
    s2.push('y');

    s1.push('c');
    s2.push('z');

    for (i = 0; i < 3; i++)
        cout << "Pop s1: " << s1.pop() << "\n";
    for (i = 0; i < 3; i++)
        cout << "Pop s2: " << s2.pop() << "\n";

    stack<double> ds1, ds2;

    ds1.init();
    ds2.init();

    ds1.push(1.1);
    ds2.push(2.2);

    ds1.push(3.3);
    ds2.push(4.4);

    ds1.push(5.5);
    ds2.push(6.6);

    for (i = 0; i < 3; i++)
        cout << "Pop ds1 : " << ds1.pop() << "\n";
    for (i = 0; i < 3; i++)
        cout << "Pop ds2 : " << ds2.pop() << "\n";

    getchar();
    return 0;
}