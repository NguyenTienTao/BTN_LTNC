#include <iostream>

using namespace std;

int *weird_sum(int a, int b){
    int c;
    c=a+b;
    return &c; // không nên trả về biến địa phương
}

int main(int argc, char* argv[]){

    int *px=NULL;
    cout << px;
    cout << *px;
    *px=0; // lỗi truy cập vào con trỏ NULL trong bộ nhớ

    char a = 'a';
    char *p1 = &a;
    int *p2 = (int*) p1;
    *p2 = 'b'; // lỗi ép kiểu con trỏ char sang int

    int *ptr1 = new int;
    int *ptr2 = new int;
    ptr1 = ptr2; // thất thoát bộ nhớ p1 khi cả 2 cùng chỉ vào địa chỉ của p2, địa chỉ vùng nhớ đã được cấp phát của ptr1 không được thu hồi

    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    cout << *p2; // tránh thu hồi bộ nhớ quá sớm vì p2 sẽ trỏ đến 1 vùng nhớ không còn hoạt động
}





