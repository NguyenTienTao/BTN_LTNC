#include <iostream>

using namespace std;

string number(int n)
{
    string s;
    switch (n) {
        case 0: {
            s = "";
            break;
        }
        case 1:
        {
            s = "one";
            break;
        }
        case 2:
        {
            s = "two";
            break;
        }
        case 3:
        {
            s = "three";
            break;
        }
        case 4:
        {
            s = "four";
            break;
        }
        case 5:
        {
            s = "five";
            break;
        }
        case 6:
        {
            s = "six";
            break;
        }
        case 7:
        {
            s = "seven";
            break;
        }
        case 8:
        {
            s = "eight";
            break;
        }
        case 9:
        {
            s = "nine";
            break;
        }
        case 10:
        {
            s = "ten";
            break;
        }
        case 11:
        {
            s = "eleven";
            break;
        }
        case 12:
        {
            s = "twelve";
            break;
        }
        case 13:
        {
            s = "thirteen";
            break;
        }
        case 14:
        {
            s = "fourteen";
            break;
        }
        case 15:
        {
            s = "fifteen";
            break;
        }
        case 16:
        {
            s = "sixteen";
            break;
        }
        case 17:
        {
            s = "seventeen";
            break;
        }
        case 18:
        {
            s = "eighteen";
            break;
        }
        case 19:
        {
            s = "nineteen";
            break;
        }
        case 20:
        {
            s = "twenty";
            break;
        }
        case 30:
        {
            s = "thirty";
            break;
        }
        case 40:
        {
            s = "forty";
            break;
        }
        case 50:
        {
            s = "fifty";
            break;
        }
        case 60:
        {
            s = "sixty";
            break;
        }
        case 70:
        {
            s = "seventy";
            break;
        }
        case 80:
        {
            s = "eighty";
            break;
        }
        case 90:
        {
            s = "ninety";
            break;
        }
    }
    return s;
}

string hangchuc (int n) {
    string hchuc;
    int a = n/10;
    int b = n%10;
    if (a==0) return number(b);
    hchuc = number(a*10)+ " " + number(b);
    return hchuc;
}

string hangtram (int n) {
    string htram;
    int a = n/100;
    int b = n%100;
    if (a==0) return hangchuc(b);
    htram = number(a) + " hundred " + hangchuc(b);
    return htram;
}

string hangnghin(int n) {
    string hnghin;
    int a = n/1000;
    int b = n%1000;
    if (a==0) return hangtram(b);
    hnghin = hangtram(a) + " thousand " + hangtram(b);
    return hnghin;
}

string hangtrieu(int n) {
    string htrieu;
    int a = n/1000000;
    int b = n%1000000;
    if (a==0) return hangnghin(b);
    htrieu = hangtram(a) + " million " + hangnghin(b);
    return htrieu;
}

int main()
{
   int n;
   cin >> n;
   if (n>0) {
       cout << hangtrieu(n);
   } else if (n<0) {
       cout << "negative" << hangtrieu(-n);
   } else cout << "zero";

    return 0;
}
