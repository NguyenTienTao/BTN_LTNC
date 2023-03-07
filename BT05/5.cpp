#include <iostream>

using namespace std;

bool ktranto(int n)
{
    for (int i=2; i<n/2; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << ktranto(n);

    return 0;
}
