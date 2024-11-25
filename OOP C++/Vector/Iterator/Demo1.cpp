#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int>::iterator it;

    it = v.begin();
    cout << *it << endl;

    it = v.begin() + 3;
    cout << *it << endl;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "  ";
    }

    getchar();
    return 0;
}