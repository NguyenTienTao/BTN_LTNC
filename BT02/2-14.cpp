#include <iostream>

using namespace std;

int main()
{
    int n, max, min, dem;
    cin >> n;
    dem = n;
    while (n>0) {
        int a;
        cin >> a;
        if (n==dem) {
            max = a;
            min = a;
        }
        if (a>max) max = a;
        if (a<min) min = a;
        n--;
    }
    cout << max << " " << min;
    return 0;
}
