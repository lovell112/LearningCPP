#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ){
            cin >> a[i][j];
        }
    }
    bool test = 1;
    for ( int i = 0; i < n; i++ ){
        if ( !test ) cout << " ";
        cout << a[i][i];
        test = 0;
    }
    return 0;
}