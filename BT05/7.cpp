#include <iostream>

using namespace std;

void indaucach(int m)
{
    for (int i=1; i<m; i++) {
        cout << " ";
    }
}

void insao(int m)
{
    for (int i=1; i<=2*m-1; i++) {
        cout << "*";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        indaucach(n-i+1);
        insao(i);
    }
    return 0;
}
