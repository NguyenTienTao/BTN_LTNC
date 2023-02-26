#include <iostream>

using namespace std;

int main()
{
    int y=-1;
    while (-1) {
        int x;
        cin >> x;
        if (x != y) cout << x << " ";
        if (x == -1) break;
        y = x;
    }

    return 0;
}
