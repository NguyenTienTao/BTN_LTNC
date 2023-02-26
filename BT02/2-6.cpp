#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int a=x, b=y;
    while (x*y!=0) {
        if (x>y) x=x%y;
        else y=y%x;
    }
    int unlc = x+y;
    cout << a/unlc << "/" << b/unlc;
    return 0;
}
