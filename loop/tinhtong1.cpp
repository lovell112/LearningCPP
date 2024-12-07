#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float s = 0;
    cin >> n;
    for ( int i = 1; i <= n; i++ ){
        s += 1/pow(i, 3);
    }
    cout << fixed << setprecision(3) << s << endl;
    return 0;
}