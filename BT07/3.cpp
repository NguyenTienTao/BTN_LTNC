#include <iostream>

using namespace std;

int count_even(int *a, int size){
    int count=0;
    for (int i=0; i<size; i++){
        if (a[i]%2==0) count++;
    }
    return count;
}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};

    cout << count_even(a, 5) << endl;
    cout << count_even(&a[5], 5) << endl;
}
