#include <iostream>
#include <cmath>

using namespace std;

int tim(int *a, int n, int low, int high){
    if ( low > high ) return -1;
    int mid=(low+high)/2;
    if (*(a+mid)==n) return mid;
    if (*(a+mid) > n) tim(a, n, low, mid-1);
    return tim(a, n, mid+1, high);
}

int main(){
    int a[5]={1,2,3,4,5};
    int n=3;
    cout << tim(a,n,0,4);
    return 0;
}
