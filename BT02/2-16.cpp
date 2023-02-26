#include <iostream>

using namespace std;

string chuso(int n)
{
    string chu;
    switch(n) {
        case 0: {
            chu = "khong";
            break;
        }
        case 1: {
            chu = "mot";
            break;
        }
        case 2: {
            chu = "hai";
            break;
        }
        case 3: {
            chu = "ba";
            break;
        }
        case 4: {
            chu = "bon";
            break;
        }
        case 5: {
            chu = "nam";
            break;
        }
        case 6: {
            chu = "sau";
            break;
        }
        case 7: {
            chu = "bay";
            break;
        }
        case 8: {
            chu = "tam";
            break;
        }
        case 9: {
            chu = "chin";
            break;
        }
    }
    return chu;
}

int main()
{
    int n;
    while (1) {
        cout << "Nhap vao mot so trong khoang 0..9: ";
        cin >> n;
        if (n<0 || n>9) break;
        cout << "Vua nhap chu so " << chuso(n) << endl;
    }
    return 0;
}
