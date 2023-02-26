#include <iostream>

using namespace std;

bool songuyento(int n)
{
    if (n==1) return false;
    for (int i=2; i<n/2; i++)
        if (n%i==0) return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (songuyento(n)) cout << "true";
    else cout << "false";

    return 0;
}
