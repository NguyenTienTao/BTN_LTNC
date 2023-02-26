#include <iostream>

using namespace std;

int main()
{
    while (1) {
        int n;
        cin >> n;
        if (n>=0 && n%5==0) cout << "Thuong cua " << n << " 5 la " << n/5 << endl;
        else cout << "-1" << endl;
        if (n==-1) {
            cout << "Bye";
            break;
        }
    }
    return 0;
}
