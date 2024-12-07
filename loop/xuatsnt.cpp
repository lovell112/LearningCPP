#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int check = 0;
    bool check2 = 0;
    for ( int i = 2; i <= n; i++ ){
        check = 0;
        for ( int j = 1; j <= sqrt(i); j++ ){
            if ( i % j == 0 ){
                check += 1;
            }
        }
        if ( check == 2 ){
            cout << i << " ";
            check2 = 1;
        }
    }
    if ( check2 == 0 ){
        cout << -1 << endl;
    }
    return 0;
}