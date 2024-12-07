#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s = 0;
    while ( n != 0 ){
        cin >> n;
        s += n;
    }
    if ( s % 100 == 0 ) cout << "DEP" << endl;
    else if ( s % 100 == 55 ) cout << "TRUNGBINH" << endl;
    else cout << "XAU" << endl;
    return 0;
}