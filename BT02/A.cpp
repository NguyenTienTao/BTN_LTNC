#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n<=100) cout << n*12000;
    else if (101<=n && n<=150) cout << 100*12000+(n-100)*16000;
    else if (150<n && 200>=n) cout << 100*12000+50*16000+(n-150)*20000;
    else cout << 100*12000+50*16000+50*20000+(n-200)*25000;

    return 0;
}
