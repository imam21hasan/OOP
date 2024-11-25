#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector<char> v1 = {'C', 'S', 'T', 'U'};
    vector<char> v2 = {'C', 'S', 'E'};

    cout << "\nBefore swapping....";
    cout << "\nV1 Vector is : ";
    for (i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "  ";
    }

    cout << "\nV2 Vector is : ";
    for (i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << "  ";
    }

    swap(v1, v2);

    cout << "\n\nAfter swapping....";
    cout << "\nV1 Vector is : ";
    for (i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "  ";
    }

    cout << "\nV2 Vector is : ";
    for (i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << "  ";
    }

    getchar();
    return 0;
}