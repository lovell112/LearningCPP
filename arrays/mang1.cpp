#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, s = 0;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
        s += a[i];
    }
    cout << s;
    return 0;
}