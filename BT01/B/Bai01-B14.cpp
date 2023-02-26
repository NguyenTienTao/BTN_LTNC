#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int a = rand() % 101, b = rand() % 101;
    int chon, laconlai;
    if (a <=50) {
        chon = b;
        laconlai = a;
    }
    else {
        chon = a;
        laconlai = b;
    }
    cout << "Hai la lan luot la: " << a << " " << b << "\n";
    cout << "Bob chon: " << chon << endl;
    cout << "Ket qua: ";
    if (chon > laconlai) cout << "thang";
    else if (chon < laconlai) cout << "thua";
    else cout << "hoa";
    return 0;
}
