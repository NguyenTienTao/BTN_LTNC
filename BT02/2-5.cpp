#include <iostream>

using namespace std;

int main()
{
    int x, y;
    do {
        cin >> x >> y;
        if (x<0 || y<0) cout << "Nhap lai: ";
    } while (x*y<0);
    int a=x,b=y;
    while (x*y!=0) {
        if (x>y) x=x%y;
        else y=y%x;
    }
    int unlc = x+y;
    cout << (b/unlc)*a;
    return 0;
}
