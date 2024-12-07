#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
    if ( a > b ) return a;
    else return b;
}

int min(int a, int b){
    if ( a < b ) return a;
    else return b;
}

int main(){
    int n = 0;
    int a[100];
    while ( cin >> a[n] ){
        n++;
    }
    int nmin = a[0];
    int nmax = a[0];
    for ( int i = 0; i < n; i++ ){
        nmin = min(a[i], nmin);
        nmax = max(a[i], nmax);
    }
    cout << nmin << "\n" << nmax << "\n" << nmin + nmax;
    return 0;
}