#include <iostream>
#include <cmath>

using namespace std;

int n;
char a[100][100];

void in(int h)
{
    long n=pow(2, h);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void matran(int i)
{
    long l = pow(2, i);
    for (int j=1; j<=l/2; j++) {
        for (int k=l/2+1; k<=l; k++) {
            a[j][k]=a[j][k-l/2];
            a[k][j]=a[j][k-l/2];
            if (a[k][j]=='o') a[k][j+l/2]='.';
            else a[k][j+l/2]='o';
        }
    }
    if (i==n) {
        in(i);
    }
    else matran(i+1);
}

int main()
{
    cin >> n;
    a[1][1]='.';
    matran(1);
    return 0;
}
