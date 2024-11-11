#include <iostream>
using namespace std;
void fun()
{
    try
    {
        throw 1;
    }
    catch (int e)
    {
        cout << "\nFrom function" << endl;
        throw; // Rethrow
    }
}
int main()
{
    try
    {
        fun();
    }
    catch (int e)
    {
        cout << "From main";
    }

    getchar();
    return 0;
}