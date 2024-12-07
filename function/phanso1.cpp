#include <iostream>
#include <math.h>
using namespace std;

int gcw(int m, int n){
    while( n != 0 ){
        int temp = m % n;
        m = n;
        n = temp;
    }
    return m;
}

int main(){
    int a1, a2, b1, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int a = a1*b2 + a2*b1;
    int b = b1*b2;
    b1 != 0 && b2 != 0 ? cout << a/gcw(a, b) << "/" << b/gcw(a, b) << endl : cout << -1 << endl;
    return 0;
}