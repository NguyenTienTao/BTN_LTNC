#include <iostream>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int tong=0, l=n.size();
    for (int i=0; i<l; i++) {
        int a = n[i]-'0';
        tong+=a;
    }
    cout << tong;
    return 0;
}
