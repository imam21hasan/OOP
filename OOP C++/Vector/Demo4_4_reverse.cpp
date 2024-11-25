#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;

    vector<int> v = {10, 20, 30, 40, 50};

    cout << "\nBefore reverse : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }

    reverse(v.begin(), v.end());

    cout << "\nAfter reverse : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }

    getchar();
    return 0;
}