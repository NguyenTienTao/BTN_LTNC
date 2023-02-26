#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = sqrt(n);
    if (a*a==n) cout << n << " la so chinh phuong";
    else cout << n << " khong la so chinh phuong";
    return 0;
}
