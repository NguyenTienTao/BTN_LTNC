#include <iostream>
#include <ctime>

using namespace std;

void taomap(char a[][12], int m, int n, int k)
{
    srand(time(0));
    for (int i=1; i<m+1; i++) {
        for (int j=1; j<n+1; j++) {
            a[i][j]='_';
        }
    }
    int x, y, count=0;
    while (count<k) {
        x = rand() % m+1;
        y = rand() % n+1;
        if (a[x][y]!='*') {
            a[x][y]='*';
            count++;
        }
    }
}

bool ktratoado(int x, int y, int m, int n)
{
    return (0<x && x<=m && 0<y && y<=n);
}

int demsobomxq(char a[][12], int m, int n, int x, int y)
{
    int count=0;
    for (int i=x-1; i<=x+1; i++) {
        for (int j=y-1; j<=y+1; j++) {
            if (a[i][j]=='*') count++;
        }
    }
    return count;
}

void inlaimap(char a[][12], int m, int n)
{
    for (int i=1; i<m+1; i++) {
        for (int j=1; j<n+1; j++) {
            if (a[i][j]=='*')
                cout << '_' << " ";
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void nhaptoado(int &x, int &y, int m, int n)
{
    do {
        cout << "Nhap toa do: ";
        cin >> x >> y;
        if (ktratoado(x, y, m, n)==0) cout << "Hay thu lai!" << endl;
    } while (ktratoado(x, y, m, n)==0);
}

int main()
{
    int m, n, k;
    cout << "So hang cua map: "; cin >> m;
    cout << "So cot cua map: "; cin >> n;
    cout << "So bom: "; cin >> k;
    char a[12][12];
    taomap(a, m, n, k);
    int dem=0;
    while (1) {
        int x, y;
        if(dem==(m*n-k))
            break;
        nhaptoado(x, y, m, n);
        if (a[x][y]=='*') {
            a[x][y]='X';
            inlaimap(a, m, n);
            cout << "YOU'RE DEAD!" << endl;
            return 0;
        }
        else {
            a[x][y]=char(demsobomxq(a, m, n, x, y))+'0';
            inlaimap(a, m ,n);
        }
        dem++;
    }
    cout << "YOU WIN!";
    return 0;
}
