#include <iostream>
using namespace std;

int sum(int a=5,int b=7)
{
    return a+b;
}
int main()
{
    cout<<sum() <<endl;
    cout<<sum(10) <<endl;
    cout<<sum(20,30);
}