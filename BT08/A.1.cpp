#include <iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây
   cout << &y;
}

int main()
{
   f(7);
   g(11);
   return 0;
}

//2 bien co cung dia chi

