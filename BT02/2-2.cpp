#include <iostream>

using namespace std;

int main()
{
    int x, y, kqua=1;
    cin >> x >> y;
    for (int i=1; i<=y; i++) {
        kqua*=x;
    }
    cout << kqua;
    return 0;
}
