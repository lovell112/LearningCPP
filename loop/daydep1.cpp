#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s = 0;
    while ( n != 0 ){
        cin >> n;
        s += n;
    }
    if ( s % 10 == 0 ) cout << "DEP" << endl;
    else if ( s % 10 == 5 ) cout << "TRUNGBINH" << endl;
    else cout << "XAU" << endl;
    return 0;
}