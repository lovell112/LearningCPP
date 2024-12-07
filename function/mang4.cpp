#include <iostream>
#include <math.h>
using namespace std;

int check(int a){
    bool test = 0;
    if ( a < 2 ) return 0;
    else {
        for ( int i = 2; i <= (int)sqrt(a); i++ ){
            if ( a % i == 0 ) {
                test = 1;
                break;
            }
        }
        if ( !test ) return a;
        else return 0;
    }
}

int main(){
    int n, s = 0;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
    }
    for ( int i = 0; i < n; i++ ) {
        s += check(a[i]);
    }
    cout << s << endl;
    return 0;
}