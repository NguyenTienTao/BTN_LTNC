#include <iostream>

using namespace std;

int main()
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*)cp << " : " << (*cp) << endl;
   }
   //
   int b[4] = {0, 1, 2, 3};
   for (int *cp = b; cp < b+4; cp++) {
      cout << (void*)cp << " : " << (*cp) << endl;
   }
   // kieu int cach 4 byte

   double c[4] = {0.1, 1.1, 2.1, 3.1};
   for (double *cp = c; cp < c+4; cp++) {
      cout << (void*)cp << " : " << (*cp) << endl;
   }
   // kieu double cach 8 byte

   double d[4] = {0.1, 1.1, 2.1, 3.1};
   for (double *cp = d; cp < d+4; cp+=2) {
      cout << (void*)cp << " : " << (*cp) << endl;
   }
   // dia chi tra ve khong theo quy tac nao
}
