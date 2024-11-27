#include <iostream>
using namespace std;
template <class T>
T maxNum(T x, T y)
{
    return (x > y ? x : y);
}
int main()
{
    int a = 5, b = 2;
    float i = 7.5, j = 11.3;
    cout << "Max value is : " << maxNum(a, b) << "\n";
    cout << "Max value is : " << maxNum(i, j) << endl;
    cout << "Max value is : " << maxNum('d', 'h') << endl;

    getchar();
    return 0;
}