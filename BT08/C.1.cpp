#include <iostream>

using namespace std;

int demkitu(char *a) {
    int l = 0;
    while (a[l] != '\0') l++;
    return l;
}

//a
void reverse(char *a) {
    int l = demkitu(a);
    for (int i=0; i<l; i++) {
        char k = a[i];
        a[i] = a[l-i-1];
        a[l-i-1] = k;
    }
}

//b
void delete_char(char *a, char c) {
    int d1 = 0, d2 = 0;
    while (d2 < demkitu(a)) {
        if (a[d2] != c) {
            a[d1++] = a[d2]
        }
        d2++;
    }
    a[d1] = '\0';
}

//c
void pad_right(char *a, int n) {
    int l = demkitu(a);
    while (l<n) {
        a[l++] = ' ';
    }
    a[l] = '\0';
}

//d
void pad_left(char *a, int n) {
    int l = demkitu(a);
    if (l<n) {
        int k = n-l;
        while (k>0) {
            for (int i=n-k; i>=0; i--) {
                a[i+1] = a[i];
            }
            a[0] = ' ';
            k--;
        }
        a[n] = '\0';
    }
}

//e
void truncate(char *a, int n) {
    int l = demkitu(a);
    if (l>n) {
        a[n] = '\0';
    }
}

//f
bool is_palindrome(char *a) {
    int l = demkitu(a);
    for (int i=0; i<l; i++) {
        if (a[i]!=a[l-i-1]) return false;
    }
    return true;
}


//g
void trim_left(char a[]) {
    int l = demkitu(a);
    for (int i=0; i < l; i++){
        if (a[i] == ' ') {
            for (int j=0; j < l-1; j++){
                a[j] = a[j+1];
            }
            a[l-1-i] = '\0';
            i--;
        }
    }
}

//h
void trim_right(char *a){
    int l = demkitu(a);
    int n = 0;
    while (a[n]==' ') n++;
    for (int i=n; i < l; i++) {
        if (a[i] == ' ') a[i] = '\0';
    }
}

int main()  {

}
