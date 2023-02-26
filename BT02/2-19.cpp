#include <iostream>

using namespace std;

int main()
{
    int n, i=1;
    double diem, hso, tonghso=0, tong=0;
    cout << "Tong so mon hoc can tinh DTB: "; cin >> n;
    int count = n;
    while (n>0) {
        cout << "Diem mon hoc " << i << ": "; cin >> diem;
        cout << "He so mon hoc " << i << ": "; cin >> hso;
        tong+=(diem*hso);
        tonghso+=hso;
        i++;
        n--;
    }
    cout << "So mon hoc: " << count << endl;
    cout << "Tong so he so: " << tonghso << endl;
    cout << "Diem trung binh cua " << count << " mon hoc: " << tong/tonghso;
    return 0;
}
