#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        int x = i;
        for (int j=1; j<=n; j++) {
            if (x==n) {
                cout << x << " ";
                x = 1;
                continue;
            }
            cout << x++ << " ";
        }
        cout << endl;
    }
    return 0;
}
