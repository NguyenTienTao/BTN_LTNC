#include <iostream>

using namespace std;

int main()
{
    int n, count=0, tong=0, i=1;
    do
    {
        cout << "Diem mon hoc " << i << ": "; cin >> n;
        if(n>10) {
            cout << "Nhap lai mon hoc " << i << " (trong khoang tu 0..10): "; cin >> n;
            count++;
            tong+=n;
        } else if(n<0) count+=0;
        else {
            count++;
            tong+=n;
        }
        i++;
    } while(0<=n);
    cout << "So mon hoc: " << count << endl;
    cout << "Diem trung binh cua " << count << " mon hoc: " << 1.0*tong/count;
    return 0;
}
