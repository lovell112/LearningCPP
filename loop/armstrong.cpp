#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    bool e;
    cin >> a >> b;
    for ( int i = a; i <= b; i++){
        int n = 0;
        int s = 0;
        int c = i;
        while ( c > 0 ){
            n++;
            c /= 10;
        }
        c = i;
        while ( c > 0 ){
            s += pow(c%10, n);
            c /= 10;
        }
        if ( i == s ){
            cout << i << " ";
            e = true;
        }
        
    }
    if ( !e ) cout << "-1";
    return 0;
}