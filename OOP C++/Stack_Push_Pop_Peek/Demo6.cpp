#include <iostream>
using namespace std;

#define SIZE 3
class stack
{
    int stck[SIZE];
    int top=0;
    public:
    void push(int x);
    int pop();
};

void stack::push(int x)
{
    if(top==SIZE)
    {
        cout<<"stack is full.\n";
        return ;
    }
    stck[top]=x;
    top++;
    return ;
}

int stack::pop()
{
    if(top==0)
    {
        cout<<"Stack is empty.\n";
        return 0;
    }
    top--;
    return stck[top];
}

int main()
{
    stack ob1,ob2;

    ob1.push(10);
    ob1.push(22);
    ob1.push(33);
    ob2.push(99);
    ob2.push(90);
    ob2.push(78);

    for(int i=0;i<SIZE;i++)
    {
        cout<<"Pop ob1 : " <<ob1.pop() <<endl;
    }
    for(int i=0;i<SIZE;i++)
    {
        cout<<"Pop ob2 : " <<ob2.pop() <<endl;
    }
}
