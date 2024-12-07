#include <bits/stdc++.h>
using namespace std;

bool mn(int n){
    if ((int)sqrt(n)*(int)sqrt(n) == n) return 1;
    else return 0;
}

int main(){
    int n = 0;
    int a[100];
    while ( cin >> a[n] ) n++;
    int sum = 0;
    for ( int i = 0; i < n; i++ ){
        if ( mn(a[i]) ) sum += a[i];
    }
    cout << sum;
    return 0;
}