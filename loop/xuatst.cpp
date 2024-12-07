#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool check = 0;
    cin >> n;
    for ( int  i = 2; i <= n; i++){
        for ( int j = 2; j < (int)sqrt(i); j++){
            if ( i % j == 0) {
                check = 1;
            }
        }
        if ( check == 0 ){
            cout << i << " ";
        }
    }
    if ( check == 1 ){
        cout << -1;
    }
    return 0;
}