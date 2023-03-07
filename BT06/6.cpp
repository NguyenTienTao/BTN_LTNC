#include <iostream>

using namespace std;

int n, check[100], a[100];

void in()
{
    for (int i=1; i<=n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void hoanvi(int i)
{
    for (int j=1; j<=n; j++) {
        if (check[j]==0) {
            a[i]=j;
            check[j]=1;
            if (i==n) {
                in();
            }
            else hoanvi(i+1);
            check[j]=0;
        }
    }
}

int main()
{
    cin >> n;
    hoanvi(1);
    return 0;
}
