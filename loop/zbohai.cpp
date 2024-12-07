#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, mul = 1, sum = 0;
    cin >> n >> m;
    while ( n > 0 ){
        mul *= n%10;
        n /= 10;
    }
    for ( int i = 1; i <= m; i++ ){
        if ( m % i == 0 ){
            sum += i;
        } else continue;
    }
    if ( mul == sum ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}