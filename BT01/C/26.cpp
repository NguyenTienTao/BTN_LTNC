#include <iostream>

using namespace std;

int main()
{
    int n, min, max, i=0;
    int tong=0;
    cin >> n;
    do {
        int x;
        cin >> x;
        tong += x;
        if (i == 0) {
            min = x;
            max = x;
            i++;
            continue;
        }
        if (min > x) min = x;
        if (max < x) max = x;
        i++;
    } while (i < n);
    cout << "Mean: " << 1.0*tong/n << endl
         << "Max: " << max << endl
         << "Min: " << min << endl;
    return 0;
}
