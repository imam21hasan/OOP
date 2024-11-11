#include <iostream>
using namespace std;

class ab
{
    public:
    ab()
    {
        cout<<"This is constractive"<<endl;
    }
    ~ab()
    {
        cout<<"This is destrictive\n";
    }
};
int main()
{
    ab ob;
}