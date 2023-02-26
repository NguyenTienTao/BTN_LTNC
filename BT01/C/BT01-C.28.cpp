
#include <iostream>

using namespace std;

int main()
{
    int x=1, i=0;
    cout << 12 << "Midnight" << "\n";
    while (x<13) {
        if (x==12 && i==0) {
            cout << x << "noon" << endl;
            x = 1;
            i++;
        } else if (x==12 && i==1) break;
        if (i==0) {
            cout << x << "am" << "\n";
            x++;
        }
        if (i==1) {
            cout << x << "pm" << endl;
            x++;
        }
    }

    return 0;
}
