#include <iostream>
using namespace std;
class coord
{
    int x, y;

public:
    coord()
    {
        x = 0;
        y = 0;
    };
    coord(int i, int j)
    {
        x = i;
        y = j;
    }
    void show()
    {
        cout << "X : " << x << "\tY : " << y << endl;
    }

    coord operator-(coord &ob2);
    coord operator-();
};
coord coord ::operator-(coord &ob2)
{
    coord temp;
    temp.x = x - ob2.x;
    temp.y = y - ob2.y;
    return temp;
}
coord coord ::operator-()
{
    x = -x;
    y = -y;
    return *this;
}
int main()
{
    coord o1(10, 10), o2(5, 7), o3;

    o3 = o1 - o2;
    o3.show();

    o3 = -o3;
    o3.show();

    return 0;
}
