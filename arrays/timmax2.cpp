#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int max = -1;
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < m; j++ ){
            cin >> a[i][j];
            if ( a[i][j] >= max ) max = a[i][j];
        }
    }
    cout << max;
    return 0;
}