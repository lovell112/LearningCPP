#include <bits/stdc++.h>
using namespace std;

int main(){
    int pos;
    cin >> pos;
    int n = 0;
    int a[100];
    while ( cin >> a[n]) n++;
    for ( int i = pos + 1; i < n; i++ ){
        a[i-1] = a[i];
    }
    n--;
    for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
    return 0;
}