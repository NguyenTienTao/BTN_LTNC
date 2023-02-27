#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.size();
    for (int i=0; i<l/2; i++) {
        if (s[i]!=s[l-i-1]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
