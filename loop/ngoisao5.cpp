#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ){
        for ( int j = 1; j <= 2*n-1; j++ ){ 
            if ( j == n - i || j == n + i || i == n-1 ) cout << "*";
            else cout << " ";
            if ( i < n - 1 && j == 2*n-1 ) cout << endl;
        }
    }
    return 0;
}