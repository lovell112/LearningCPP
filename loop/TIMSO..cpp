#include <bits/stdc++.h>
using namespace std;

int main(){
    for( int i = 100; i < 1000; i++ ){
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 10;
        int d = i / 10 * 100 + i % 10;
        if ( c == b + 3 && c == a + 6 && d == i + 2250 ){
            cout << i << endl;
        }
    }
    return 0;
}