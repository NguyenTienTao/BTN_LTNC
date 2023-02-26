#include <iostream>
#include <cmath>
#include <iomanip>

int tienthunhap(int luong) {
    int baohiem = luong*9/100, thue;
    int tienchiuthue = luong - baohiem;
    if (tienchiuthue<=1000000) thue = 0;
    else if (1000000<tienchiuthue && tienchiuthue<=1500000) thue = (tienchiuthue - 1000000)/10;
    else if (1500000<tienchiuthue && 200>=tienchiuthue) thue = 500000/10 + (tienchiuthue - 1500000)*3/20;
    else thue = 500000/10 + 500000*3/20 + (tienchiuthue - 2000000)/5;
    return (tienchiuthue - thue);
}

using namespace std;

int main()
{
    double tienno = 10000000;
    int thang=0, luong = 100*12000+50*16000+5*20000, sodu;
    int luongmoithang = tienthunhap(luong);
    while(tienno > 0) {
        cout << "Tien luong moi thang: " << luongmoithang << endl;
        sodu = round(tienno/50);
        cout << "So lai cuoi thang: " << setprecision(0) << fixed << sodu << endl;
        int tienduanh = luongmoithang + 1500000 - 2000000;
        tienno = tienno - tienduanh + sodu;
        thang++;
        cout << "So no con du: " << setprecision(0) << fixed << tienno << endl;
    }
    cout << "So thang tra het no: " << thang;
    return 0;
}
