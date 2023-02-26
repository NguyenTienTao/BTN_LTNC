#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double tienno;
    cin >> tienno;
    for (int i=1; i<=12; i++) {
        double laisuat = round(tienno/50);
        tienno += laisuat;
    }
    cout << setprecision(0) << fixed << tienno;
    return 0;
}
