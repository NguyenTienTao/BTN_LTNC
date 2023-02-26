#include <iostream>

using namespace std;

int main()
{
    int luong, thue;
    cin >> luong;
    int baohiem = luong*9/100;
    int tienchiuthue = luong - baohiem;
    if (tienchiuthue<=1000000) thue = 0;
    else if (1000000<tienchiuthue && tienchiuthue<=1500000) thue = (tienchiuthue - 1000000)/10;
    else if (1500000<tienchiuthue && 200>=tienchiuthue) thue = 500000/10 + (tienchiuthue - 1500000)*3/20;
    else thue = 500000/10 + 500000*3/20 + (tienchiuthue - 2000000)/5;
    cout << tienchiuthue - thue;

    return 0;
}
