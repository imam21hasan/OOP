#include <iostream>
using namespace std;
template <typename AB>
AB show(AB a, AB b, AB c)
{
   return a + b + c;
}
int main()
{
   cout << "\nSum is : " << show(10, 53, 41);
   cout << "\nSum is : " << show(22.22, 33.33, 44.44);

   getchar();
   return 0;
}