#include <iostream>

using namespace std;

int main()
{
    int n, count=1;
    cin >> n;
    int a[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            a[i][j]=0;
        }
    } int i=0, j=n/2, h, k;
    while (count<=n*n) {
        if (count==1) {
            a[i][j]=1;
            i=n-1;
            j=j+1;
            count++;
            continue;
        }
        if (a[i][j]==0) {
            h = i;
            k = j;
            a[i][j]=count++;
            i = (i+n-1)%n;
            j = (j+1)%n;
        } else {
            i = (h+1)%n;
            j = k;
            a[i][j] = count++;
            i = (i+n-1)%n;
            j = (j+1)%n;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
