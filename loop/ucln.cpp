#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    while (b != 0){
        long long r = a%b;
        a = b;
        b = r;
    }
    cout << a << endl;
    return 0;
}