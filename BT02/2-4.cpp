#include <iostream>

using namespace std;

int main()
{
    int x, y;
    do {
        cin >> x >> y;
        if (x<0 || y<0) cout << "Nhap lai: ";
    } while (x*y<0);
    while (x*y!=0) {
        if (x>y) x=x%y;
        else y=y%x;
    }
    cout << x+y;
    return 0;
}
