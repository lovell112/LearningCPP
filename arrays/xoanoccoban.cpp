#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int top = 0, right = m-1, bot = n-1, left = 0;
    int count = 1;
    for ( ; top <= bot && left <= right; ){
        for ( int i = left; i <= right; i++ ) a[top][i] = count++;
        ++top;
        for(int i = top; i <= bot; i++) a[i][right] = count++;
        --right;
        for( int i = right; i >= left; i-- ) a[bot][i] = count++;
        --bot;
        for( int i = bot; i >= top; i-- ) a[i][left] = count++;
        ++left;
    }
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < m; j++ ){
            cout << a[i][j];
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}