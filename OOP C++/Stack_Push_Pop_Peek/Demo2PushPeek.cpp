#include <iostream>
using namespace std;
#define SIZE 3
int stack[SIZE];
int top=-1;

void push(int x)
{
    if(top<SIZE-1)
    {
        top++;
        stack[top]=x;
        cout<<"Successfully added item : " <<x <<endl;
    }
    else
    {
        cout<<"Stack is full.\n";
    }
}
int peek()
{
    if(top>=0)
    {
        return stack[top];
    }
    else
    {
        cout<<"Stack empty.\n";
        return -1;
    }
}
int main()
 {
    cout<<"\nStack working perfectly\n\n";
    
    push(10);
    push(22);
    push(33);
    push(44);

    cout<<"Top of stack : " <<peek() <<endl;
}