#include <iostream>
using namespace std;
#define SIZE 3
int stack[SIZE];
int top=0;

void push(int x)
{
    if(top==SIZE)
    {
        cout<<"Stack is full.\n";
        return ;
    }
    else
    {
        stack[top]=x;
        top++;
        cout<<"Successfully added item : " <<x <<endl;
    }
}

int pop()
{
    if(top==0)
    {
        cout<<"Stack is empty\n";
        return 0;
    }
    else
    {
        top--;
        return stack[top];
    }
}

int peek()
{
    if(top==0)
    {
        cout<<"In stack has no item  " <<endl;
        return 0;
    }
    else
    {
        return stack[top];
    }
}

int main()
{
    pop();
    push(11);
    push(22);
    push(33);
    cout<<"Pop item is : " <<pop() <<endl;
    cout<<"Top of stack :" <<peek() <<endl;
    push(44);

    cout<<"Pop item is : " <<pop() <<endl;
    cout<<"Top of stack :" <<peek() <<endl;
    cout<<"Pop item is : " <<pop() <<endl;
    push(55);
    cout<<"Pop item is : " <<pop() <<endl;
    cout<<"Top of stack :" <<peek() <<endl;
    cout<<"Pop item is : " <<pop() <<endl;
}
