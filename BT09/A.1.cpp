#include <iostream>
#include <cstring>
using namespace std;

char *concat(const char*str1, const char* str2){
    int l1 = strlen(str1);
    int l2 = strlen(str2);

    char *res = new char[l1+l2];
    for (int i=0; i<l1; i++) {
        res[i] = str1[i];
    }
    for (int i=l1; i<l1+l2; i++) {
        res[i] = str2[i-l1];
    }

    return res;
}

int main(){
    const char* s1 = "hello";
    const char* s2 = "world";

    cout << concat(s1,s2);

    return 0;
}
