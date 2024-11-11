#include <iostream>
using namespace std;

class ab
{
    public:
    ab();
    ~ab();
    void a();
};

ab :: ab()
{
    cout<<"This is Constructor.\n";
}

ab :: ~ab()
{
    cout<<"This is Destructor.\n";
}

void ab :: a()
{
    cout<<"This is function.\n";
}

int main()
{
    ab ob;
    ob.a();
}