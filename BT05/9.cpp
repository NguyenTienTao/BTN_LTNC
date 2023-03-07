#include <iostream>
#include <ctime>
using namespace std;

int ngaunhien(int n)
{
    srand(time(0));
    return (rand() % n+1);
}

int main()
{
    int n;
    cin >> n;
    cout << ngaunhien(n);
    return 0;
}
