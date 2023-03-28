#include <iostream>

using namespace std;

int demkitu(char *a) {
    int l = 0;
    while (a[l] != '\0') l++;
    return l;
}

//a
char* reverse(char *a) {
    int l = demkitu(a);
    char* s = new char[l];
    for (int i=0; i<l; i++) {
        s[i] = a[l-i-1];
    }
    return s;
}

//b
char* delete_char(char *a, char c) {
    int d1 = 0, d2 = 0, l = demkitu(a);
    char* s = new char[l+1];
    while (d2 < l) {
        if (a[d2] != c) {
            s[d1++] = a[d2]
        }
        d2++;
    }
    s[d1] = '\0';
    return s;
}

//c
char* pad_right(char *a, int n) {
    int l = demkitu(a);
    char* s = new char[n+1];
    for (int i=0; i<l; i++) {
        s[i] = a[i];
    }
    while (l<n) {
        s[l++] = ' ';
    }
    s[l] = '\0';
    return s;
}

//d
char* pad_left(char *a, int n) {
    int l = demkitu(a);
    char* s= new char[n+1];
    for (int i=0; i<l; i++) {
        s[i] = a[i];
    }
    if (l<n) {
        int k = n-l;
        while (k>0) {
            for (int i=n-k; i>=0; i--) {
                s[i+1] = s[i];
            }
            s[0] = ' ';
            k--;
        }
        s[n] = '\0';
    }
}

//e
char* truncate(char *a, int n) {
    int l = demkitu(a);
    char* s = new char[n+1];
    for (int i=0; i<l; i++) {
        s[i] = a[i];
    }
    if (l>n) {
        s[n] = '\0';
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
char* trim_left(char a[]) {
    int l = demkitu(a);
    char *s = new char[l];
    for (int i=0; i < l; i++){
        if (a[i] == ' ') continue;
        int k=0;
        for (int j=i; j < l; j++){
            s[k++] = a[j];
        }
        s[k] = '\0';
        break;
    }
    return s;
}

//h
char* trim_right(char *a){
    int l = demkitu(a);
    char *s = new char[l];
    for (int i=0; i<l; i++) {
        s[i] = a[i];
    }
    int n = 0;
    while (s[n]==' ') n++;
    for (int i=n; i < l; i++) {
        if (s[i] == ' ') s[i] = '\0';
    }
    return s;
}

int main()  {

}
