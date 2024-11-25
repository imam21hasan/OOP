#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2{5, 6, 7, 8};
    vector<int> v3 = {8, 8, 8, 8};
    vector<int> v4(4, 9);

    v1.push_back(5);
    v1.push_back(6);

    cout << "\nV1 vector is : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "  ";
    }

    cout << "\nV2 vector is : ";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << "  ";
    }

    cout << "\nV3 vector is : ";
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << "  ";
    }

    cout << "\nV4 vector is : ";
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << "  ";
    }

    getchar();
    return 0;
}