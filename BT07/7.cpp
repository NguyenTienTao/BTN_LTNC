#include <iostream>
#include <cstring>

using namespace std;

int count(char *a, char *b){
    int l1 = strlen (a);
    int l2 = strlen (b);
    int cnt=0;

    for (int i=0; i<=l2-l1; i++){
        if (strncmp(b+i,a,l1)==0) cnt++;
    }

    return cnt;
}

int main(){
    char *a = "ha";
    char *b = "hahahaha";

    cout << count(a,b);
    return 0;
}
