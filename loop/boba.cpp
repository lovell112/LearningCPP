#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int s = 0;
    int d = a; // d là nguồn đếm thay a
    int n = 0; // n là biến đếm
    
    // Sử dụng while đếm số lượng chữ số của a
    while ( d > 0 ){
        n++;
        d /= 10;
    }
    
    // Sử dụng for để tính tổng các chữ số trong a
    for ( int i = 0; i < n; i++ ){
        s += (int)(a/pow(10, i))%10;
    }
    
    int e = b; // e là nguồn đếm thay b
    int m = 0; // m là biến đếm
    
    // sử dụng while đếm số lượng chữ số của b
    while ( e > 0 ){
        m++;
        e /= 10;
    }
    if ( s + (int)(b/pow(10, m - 1)) == c ){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}