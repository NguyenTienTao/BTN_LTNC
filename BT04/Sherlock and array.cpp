#include <iostream>

using namespace std;

void nhapmang(int a[], int x) {
    for (int i=0; i<x; i++)
        cin >> a[i];
}

bool xulimang(int a[], int x) {
    for (int i=0; i<x; i++) {
        int tong1=0, tong2=0;
        for (int j=i+1; j<x; j++) {
            tong2+=a[j];
        }
        for (int k=i-1; k>=0; k--) {
            tong1+=a[k];
        }
        if (tong2==tong1) return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        int x;
        cin >> x;
        int a[x];
        nhapmang(a, x);
        if (xulimang(a, x)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
