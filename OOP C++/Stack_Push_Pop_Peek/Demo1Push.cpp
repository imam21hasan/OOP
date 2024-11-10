#include <iostream>
using namespace std;
#define SIZE 3
int stack[SIZE];
int top=0;

void push(int x)
{
    if(top>=SIZE)
    {
        cout<<"stack is full.\n";
        return ;
    }
    else
    {
        stack[top]=x;
        top++;
        cout<<"Successfully added item : " <<x <<endl;
    }
}
int main()
    {
        cout<<"\nStack working perfectly\n\n";

        push(10);
        push(22);
        push(33);
        push(44);
    }