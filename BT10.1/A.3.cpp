#include <iostream>
#include <iomanip>
using namespace std;

struct Point{
    double x;
    double y;
};

void print(Point a) {
    cout << "(" << a.x << ", " << a.y << ")";
}

Point mid_point(const Point &a, const Point &b) {
    Point mid;
    mid.x = (a.x+b.x)/2;
    mid.y = (a.y+b.y)/2;
    return mid;
}

int main()
{
    Point A{1.5, 3.2}, B{2.5, 5.8};
    Point mid = mid_point(A, B);
    print(mid);
    return 0;
}
