#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count1 = 0, count2 = 0;
    cin >> n;
    for ( int i = 0; n >= 0; i++ ){
        int rep = n;
        n -= i;
        if ( n < 0 ){
            n = rep;
            break;
        }
    }
    if ( n == 0 ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}