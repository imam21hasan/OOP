#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "\nIndex v[3] : " << v[3];
    cout << "\nIndex v[7] : " << v[7];

    cout << "\nIndex v[5] : " << v.at(5);

    cout << "\nSize of the vactor : " << v.size();

    cout << "\nVector elements : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }

    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    cout << "\nNew size of the vactor : " << v.size();

    cout << "\nNew vector elements : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "  ";
    }

    v.pop_back();
    v.pop_back();
    cout << "\nNew size of the vactor : " << v.size();

    cout << "\nNew vector elements : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "  ";
    }

    cout << "\nFist element is : " << v.front();
    cout << "\nLast elements is : " << v.back();

    cout << "\nNew size of the vactor : " << v.size();

    if (v.empty())
        cout << "\nThe vector is empty.";
    else
        cout << "\nThe vector is not empty.";

    v.erase(v.begin() + 2);
    cout << "\nAfter 1 erase vector elements : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "  ";
    }

    v.erase(v.begin() + 3, v.begin() + 9);
    cout << "\nAfter erase vector elements : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "  ";
    }

    cout << "\nNew size after erase : " << v.size();

    v.insert(v.begin(), 55);
    cout << "\nAfter 55 insert the vector elements : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "  ";
    }
    cout << "\nNew size after insert : " << v.size();

    v.insert(v.begin() + 4, 66);
    cout << "\nAfter 66 insert the vector elements : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "  ";
    }

    v.insert(v.begin(), 3, 77);
    cout << "\nAfter 77 insert in 3 times the vector elements : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "  ";
    }

    v.insert(v.begin() + 3, 2, 99);
    cout << "\nAfter 99 insert in 2 times from v[3] the vector elements : ";
    for (i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "  ";
    }

    getchar();
    return 0;
}