#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n+1];
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n+1; i++)
        cin >> b[i];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n+1; j++) {
            if (a[i]==b[j]) {
                a[i]=-1;
                b[j]=-1;
                break;
            }
        }
    }
    for (int i=0; i<n+1; i++) {
        if(b[i]!=-1) cout << b[i];
    }
    return 0;
}
