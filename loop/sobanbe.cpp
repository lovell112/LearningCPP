#include <iostream>
using namespace std;

int main(){
    int a, b, s1 = 0, s2 = 0;
    cin >> a >> b;
    for ( int i = 1; i < a; i++ ){
        if ( a % i == 0){
            s1 += i;
        }
    }
    for ( int j = 1; j < b; j++ ){
        if ( b % j == 0 ){
            s2 += j;
        }
    }
    if ( s1 == b && s2 == a ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}