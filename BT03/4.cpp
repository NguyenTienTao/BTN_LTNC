#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    char a[m+2][n+2];
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            if (a[i][j]!='*') {
                a[i][j] = '0';
                for (int h=i-1; h<=i+1; h++) {
                    for (int k=j-1; k<=j+1; k++) {
                        if (a[h][k]=='*')
                            a[i][j]++;
                    }
                }
            }
        }
    }
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
