#include <iostream>
#include <conio.h>
using namespace std;

class Check
{
private:
  int i;

public:
  Check() : i(3) {}
  Check operator--()
  {
    Check temp;
    temp.i = --i;
    return temp;
  }

  Check operator--(int)
  {
    Check temp;
    temp.i = i--;
    return temp;
  }

  void Display()
  {
    cout << "i = " << i << endl;
  }
};

int main()
{
  Check obj, obj1;
  obj.Display();
  obj1.Display();

  obj1 = --obj;
  obj.Display();
  obj1.Display();

  obj1 = obj--;
  obj.Display();
  obj1.Display();

  getch();
  return 0;
}