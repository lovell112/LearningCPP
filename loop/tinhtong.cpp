#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float sum = 1.0, mul = 1.0;
    cin >> n;
    for ( int i = 0; i <= n; i++ ){
        mul *= (2.0*(i+1)/(2*i+3));
        sum += mul;
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}