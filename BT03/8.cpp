#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int tongtg = 0;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]>a[j]) {
                int the = a[i];
                a[i] = a[j];
                a[j] = the;
            }
        }
        tongtg += a[i];
    }
    cout << tongtg;
    return 0;
}
