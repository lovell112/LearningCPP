#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
        a[i] % 2 ? 0 : s += a[i];
    }
    cout << s;
    return 0;
}