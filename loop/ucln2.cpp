#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long ucln = 0;
    while ( b != 0 ){
        int r = a % b;
        a = b;
        b = r;
        ucln = a;
    }
    cout << ucln << endl;
    return 0;
}