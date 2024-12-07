#include <iostream>
#include <math.h>
using namespace std;

int gcw(int m, int n){
    while ( n != 0 ) {
        int temp = m % n;
        m = n;
        n = temp;
    }
    return m;
}

int main(){
    int n;
    cin >> n;
    int an, bn;
    float min = 10000;
    for ( int i = 0; i < n; i++ ){
        int a, b;
        cin >> a >> b;
        if ( 1.0*a/b <= min ){
            an = a/gcw(a, b);
            bn = b/gcw(a, b);
        }
        min = 1.0*a/b;
    }
    cout << an << "/" << bn << endl;
    return 0;
}