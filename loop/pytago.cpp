#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool s = 0;
    cin >> n;
    for ( int i = 1; i <= n; i++ ){
        for ( int j = i; j <= n; j++ ){
            int k = sqrt(j*j + i*i);
            if ( k*k == j*j + i*i && k <= n ){
                cout << i << " " << j << " " << k << endl;
                s = 1;
            }
        }
    }
    if ( s == 0 ) cout << -1 << endl;
    return 0;
}