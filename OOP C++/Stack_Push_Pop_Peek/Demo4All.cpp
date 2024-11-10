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
int peek()
{
    if (top >= 0)
    {
        return stack[top];
    }
    else
    {
        cout << "In stack has no item.\n";
        return -1;
    }
}
int main()
{
    cout << "\nStack working perfectly\n\n";
    peek();
    push(10);
    cout << "Top of stack : " << peek() << endl;
    push(22);
    push(33);
    cout << "Pop item is : " << pop() << endl;
    push(44);

    cout << "Top of stack : " << peek() << endl;
    cout << "Pop item is : " << pop() << endl;
    cout << "Top of stack : " << peek() << endl;
    cout << "Pop item is : " << pop() << endl;
}
