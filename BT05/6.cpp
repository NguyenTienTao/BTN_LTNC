
#include <iostream>

using namespace std;

bool ktranto(int n)
{
    for (int i=2; i<n/2; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int ucln(int a, int b)
{
    if (b==0) return a;
    return ucln(b, a%b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ucln(a, b) << endl;
    if (ktranto(a)==1 && ktranto(b)==1) cout << "Cung la nto";
    else cout << "Khong cung nto";

    return 0;
}
