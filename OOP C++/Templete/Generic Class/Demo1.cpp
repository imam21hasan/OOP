#include <iostream>
using namespace std;
template <class A>
class Demo1
{
    A x, y, z;

public:
    Demo1(A a, A b, A c)
    {
        x = a;
        y = b;
        z = c;
    }
    void show()
    {
        cout << "Sum of x,y & z is : " << x + y + z << endl;
    }
    void show2()
    {
        cout << x << "\t" << y << "\t" << z << endl;
    }
    A display()
    {
        return x * y * z;
    }
};
int main()
{
    Demo1<int> ob(2, 3, 4);
    Demo1<char> ob2('I', 'H', 'S');
    Demo1<string> ob3("Imam", "Hasan", "Shawon");
    Demo1<double> ob4(2.2, 3.3, 4.5);
    cout << "\n";

    ob.show();
    cout << "The multiplication is : " << ob.display() << endl;
    ob2.show2();
    ob3.show2();

    ob4.show();
    cout << "The multiplication is : " << ob4.display() << endl;

    getchar();
    return 0;
}