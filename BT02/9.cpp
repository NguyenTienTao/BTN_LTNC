#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int min_a = a, min_b = b;
    for (int i=1; i<=n-1; i++) {
        cin >> a >> b;
        if (min_a > a) min_a = a;
        if (min_b > b) min_b = b;
    }
    cout << min_a*min_b;

    return 0;
}
