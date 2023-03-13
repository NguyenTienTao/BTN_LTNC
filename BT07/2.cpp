#include <iostream>
using namespace std;

void f(int *a) {
    cout << sizeof(a) << endl;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    cout << sizeof(a) << endl;
    f(a);

    return 0;
}

// Kích thước khác nhau
