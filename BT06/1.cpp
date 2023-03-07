#include <iostream>

using namespace std;

int n, a[100], cot[100], d1[2*100-1], d2[2*100-1];
char b[100][100];

void in()
{
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (j == a[i]) b[i][j]='*';
            else b[i][j] = '.';
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n\n\n";
}

void xephau(int i)
{
    for (int j=1; j<=n; j++) {
        if (cot[j]==0 && d1[i-j+n]==0 && d2[i+j-1]==0) {
            a[i] = j;
            cot[j]=1; d1[i-j+n]=1; d2[i+j-1]=1;
            if (i==n) {
                in();
            }
            else xephau(i+1);
            cot[j]=0; d1[i-j+n]=0; d2[i+j-1]=0;
        }
    }
}

int main()
{
    cin >> n;
    xephau(1);
    return 0;
}
