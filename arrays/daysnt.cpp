#include <bits/stdc++.h>
using namespace std;

bool pn(int a){
    bool test = 1;
    for ( int i = 2; i <= (int)sqrt(a); i++ ){
        if ( a % i == 0 ){
            test = 0;
            break;
        }
    }
    if ( test && a > 1 ) return 1;
    else return 0;
}

int main(){
    int k;
    cin >> k;
    int a[100];
    int n = 0;
    while ( cin >> a[n] ) n++;
    int b[n];
    int m = 0;
    for ( int i = 0; i < n; i++ ){
        if ( pn(a[i]) && a[i] <= k ) {
            b[m] = a[i];
            m++;
        }
    }
    int max = -1;
    for ( int i = 0; i < m; i++ ){
        if ( b[i] > max ) max = b[i];
    }
    if ( max > 1 ) cout << max;
    else cout << -1;
    return 0;
}