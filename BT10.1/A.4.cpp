#include <iostream>
#include <iomanip>
using namespace std;

struct Point{
    double x;
    double y;
};

void print(Point &a) {
    cout << &(a.x) << endl
         << &(a.y) << endl
         << &a << endl;
}

int main()
{
    Point A{1.5, 3.2};
    print(A);
    return 0;
}

//ta thấy địa chỉ của trường x giống với địa chỉ của biến A nhưng với địa chỉ trường y thì lại khác
