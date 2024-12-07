#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    int n = 0;
    int s = 0;
    while ( cin >> a ){
        int n = 0;
        int s = 0;
        int b = a;
        while ( b > 0 ){
            n++;
            b /= 10;
        }
        int c = a;
        while ( c > 0 ){
            s += pow(c%10, n);
            c /= 10;
        }
    if ( a == s ){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
    return 0;
}