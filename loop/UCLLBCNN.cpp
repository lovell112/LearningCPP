#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;
    //Ước chung lớn nhất
    for ( int i = a*(b+1); i >= 1; i-- ){
        if( a%i == 0 && b%i == 0 && a >= i && b >= i ){
            cout << i << " ";
            break;
        }
    }
    //Bội chung nhỏ nhất
    for ( int j = 1; j < a*(b+1); j++ ){
        if ( j%a == 0 && j%b == 0 && a <= j && b <= j ){
            cout << j;
            break;
        }
    }
    return 0;
}