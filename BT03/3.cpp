#include <iostream>

using namespace std;

bool sodoiguong(int n)
{
    int k=0, m=n;
    while (m!=0) {
        m/=10;
        k++;
    }
    int b[k], i=0;
    while (n!=0) {
        int a = n%10;
        b[i] = a;
        i++;
        n/=10;
    }
    for (int j=0; j<k; j++) {
        if (b[j]!=b[k-j-1]) return false;
    }
    return true;
}

void ktra(int a, int b)
{
    int dem=0;
    for (int i=a; i<=b; i++) {
        if (sodoiguong(i)) dem++;
    }
    cout << dem << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[2][n];
    for (int i=0; i<n; i++) {
        cin >> a[0][i] >> a[1][i];
        ktra(a[0][i], a[1][i]);
    }

    return 0;
}
