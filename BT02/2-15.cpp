#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int f0=0, f1=1, fn = 0;
    while(fn < n) {
        int the = f1;
        fn = f1 + f0;
        cout << fn << " ";
        f1 = fn;
        f0 = the;
    }
    cout << endl;
    if (n==fn) cout << n << " la so fibonacci";
    else cout << n << " khong la so fibonacci";
    return 0;
}
