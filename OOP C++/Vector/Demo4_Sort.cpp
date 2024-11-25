#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector<int> v2 = {2, 9, 33, 7, 15, 19, 13};
    vector<int> v;
    v.push_back(10);
    v.push_back(7);
    v.push_back(99);
    v.push_back(45);
    v.push_back(78);
    v.push_back(23);
    v.push_back(14);
    v.push_back(40);

    cout << "\nBefore sorting V1 : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }

    sort(v.begin(), v.end());

    cout << "\nAfter ascending sort V1 : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }

    reverse(v.begin(), v.end());
    cout << "\nAfter descending sort V1 : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }

    cout << "\n\nBefore sorting V2 : ";
    for (i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << "  ";
    }

    sort(v2.begin() + 2, v2.end() - 2);

    cout << "\nAfter sorting V2 : ";
    for (i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << "  ";
    }

    getchar();
    return 0;
}