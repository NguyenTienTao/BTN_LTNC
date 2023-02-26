#include <iostream>

using namespace std;

int main()
{
    string f0 = "a", f1 = "b";
    cout << f0 << endl << f1 << endl;
    for (int i=2; i <= 10; i++) {
        string the = f1;
        string fn = f1 + f0;
        cout << fn << endl;
        f1 = fn;
        f0 = the;
    }
    return 0;
}
