#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, n = 0;
    cin >> a;
    int b = a;
    int max = 0;
    //tách số
    while ( b > 0 ){
        n++;
        b /= 10;
    }
    //tìm max
    int s[n];
    for ( int i = 0; i <= n - 1; i++ ){
        int c = i;
        while ( c <= n - 1 ){
            int nn = (int)(a/pow(10, i+1))*pow(10, i) + a%(int)pow(10, i);
            c++;
            s[i] = nn;
            if ( s[i] >= max ) max = s[i];
            break;
    }
    }
    cout << max;
    return 0;
}