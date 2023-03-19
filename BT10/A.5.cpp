#include <iostream>

using namespace std;

struct Point{
    int *x;
};

void print(Point a) {
    cout << a.x;
}

int main()
{
    Point A;
    int n;
    A.x = &n;
    cout << A.x << endl;
    print(A);
    return 0;
}
