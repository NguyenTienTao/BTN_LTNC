#include <iostream>

using namespace std;

struct Point{
    double x;
    double y;
};

void print1(Point a) {
    cout << "(" << a.x << ", " << a.y << ")" << endl;
    cout << &a << endl;
}

void print2(Point &a) {
    cout << "(" << a.x << ", " << a.y << ")" << endl;
    cout << &a << endl;
}

int main()
{
    Point A{1.5, 3.2};
    print1(A);
    print2(A);
    cout << &A;
    return 0;
}
