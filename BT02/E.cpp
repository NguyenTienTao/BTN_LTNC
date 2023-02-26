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

int thunhapmoithang(int n)
{
    int tien;
    if (n<=100) tien = n*12000;
    else if (101<=n && n<=150) tien = 100*12000+(n-100)*16000;
    else if (150<n && 200>=n) tien = 100*12000+50*16000+(n-150)*20000;
    else tien = 100*12000+50*16000+50*20000+(n-200)*25000;
    return tien;
}

int sogio(int n)
{
    int gio;
    switch (n) {
        case 9: {
            gio = 155;
            break;
        }
        case 10: {
            gio = 145;
            break;
        }
        case 11: {
            gio = 125;
            break;
        }
        case 12: {
            gio = 135;
            break;
        }
        case 1: {
            gio = 100;
            break;
        }
        case 2: {
            gio = 100;
            break;
        }
        case 3: {
            gio = 145;
            break;
        }
        case 4: {
            gio = 135;
            break;
        }
        case 5: {
            gio = 100;
            break;
        }
        case 6: {
            gio = 155;
            break;
        }
        case 7: {
            gio = 170;
            break;
        }
        case 8: {
            gio = 180;
            break;
        }
    }
    return gio;
}

using namespace std;

int main()
{
    double tienno = 10000000;
    int thang=9, gio, sodu, count, tienduanh, luongmoithang;
    while(tienno > 0) {
        if (thang == 13) thang = 1;
        gio = sogio(thang++);
        luongmoithang = tienthunhap(thunhapmoithang(gio));
        cout << "Tien luong moi thang: " << luongmoithang << endl;
        tienduanh = luongmoithang + 1500000 - 2000000;
        sodu = round(tienno/50);
        cout << "So lai cuoi thang: " << setprecision(0) << fixed << sodu << endl;
        tienno = tienno - tienduanh + sodu;
        count++;
        cout << "So no con du: " << setprecision(0) << fixed << tienno << endl;
    }
    cout << "So thang tra het no: " << count << endl;
    cout << "Khoan thanh toan cuoi cung voi ngan hang: " << tienno + tienduanh - sodu;
    return 0;
}
