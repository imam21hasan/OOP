#include <iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (int n)
        {
            cout << "\nHandle Partially ";
            throw;
        }
    }
    catch (int n)
    {
        cout << "\nHandle remaining ";
    }

    getchar();
    return 0;
}
