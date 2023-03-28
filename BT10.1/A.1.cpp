#include <iostream>

using namespace std;

struct Point{
    double x;
    double y;
};

void print(Point &a) {
    cout << "(" << a.x << ", " << a.y << ")" << endl;
}

int main()
{
    Point A{1.5, 3.2};
    print(A);
    return 0;
}
