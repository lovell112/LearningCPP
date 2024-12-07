#include <bits/stdc++.h>
using namespace std;

int main(){
    int check, a, n = 0;
    cin >> check >> a;
    int b = a;
    bool f = 0;
    while ( b > 0 ){
        b /= 10;
        n++;
    }
    for ( int i = 0; i < n; i++ ){
        int count = a / (int)pow(10, n-1-i) % 10;
        if ( check == i ){
            cout << count << endl;
            f = 1;
            break;
        }
    }
    if ( f == 0 ){
        cout << -1 << endl;
    }
    return 0;
}