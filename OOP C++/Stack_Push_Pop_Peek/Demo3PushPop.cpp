#include <iostream>
using namespace std;
#define SIZE 3
int stack[SIZE];
int top = -1;

void push(int x)
{
    if (top < SIZE - 1)
    {
        top++;
        stack[top] = x;
        cout << "Successfully added item : " << x << endl;
    }
    else
    {
        cout << "Stack is full.\n";
    }
}
int pop()
{
    if (top >= 0)
    {
        int val = stack[top];
        top--;
        return val;
    }
    else
    {
        cout << "Stack is empty.\n";
        return -1;
    }
}

int main()
{
    cout << "\nStack working perfectly\n\n";
    push(10);
    push(22);
    push(33);
    cout << "Pop item is : " << pop() << endl;
    push(44);
    push(68);

    cout << "Pop item is : " << pop() << endl;
    cout << "Pop item is : " << pop() << endl;
}