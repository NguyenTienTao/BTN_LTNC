#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n], count=1, h1=0, h2=m, c1=0, c2=n;
    while (h1<h2 && c1<c2) {
        for (int i=c1; i<c2; i++) {
            a[h1][i] = count++;
        }
        h1++;
        for (int i=h1; i<h2; i++) {
            a[i][c2-1] = count++;
        }
        c2--;
        for (int i=c2-1; i>=c1; i--) {
            a[h2-1][i] = count++;
        }
        h2--;
        for (int i=h2-1; i>=h1; i--) {
            a[i][c1] = count++;
        }
        c1++;
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
