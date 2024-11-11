#include <bits/stdc++.h>
using namespace std;
class Number
{
private:
    int a, b;

public:
    Number(int x, int y)
    {
        a = x;
        b = y;
    }
    int gcd()
    {
        while (a != b)
        {
            if (a > b)
                a = a - b;
            else
                b = b - a;
        }
        return a;
    }
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};
class MyPrimeException
{
};
int main()
{
    int x = 13, y = 56;

    Number num1(x, y);
    cout << "GCD is = "
         << num1.gcd() << endl;
    if (num1.isPrime(x))
        cout << x << " is a prime number" << endl;
    if (num1.isPrime(y))
        cout << y << " is a prime number" << endl;

    if ((num1.isPrime(x)) || (num1.isPrime(y)))
    {
        try
        {
            throw MyPrimeException();
        }
        catch (MyPrimeException t)
        {

            cout << "Caught exception of MyPrimeException class." << endl;
        }
    }
    getchar();
    return 0;
}