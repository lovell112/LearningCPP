#include <bits/stdc++.h>
using namespace std;

void disc(int m, int n, int a[]){
    //the disc
    int b[m];
    for ( int i = 0; i < m; i++ ){
        b[i] = i + 1;
    }
    for ( int i = 0; i < n; i++ ){
        int temp;
        int pos;
        //found position
        for ( int j = 0; j < m; j++ ){
            if ( a[i] == b[j] ) {
                temp = b[j];
                pos = j;
                break;
            }
        }
        //teleport
        if ( pos != 0 ) {
            for ( int j = pos; j > 0; j-- ){
                b[j] = b[j-1];
            }
        }
        b[0] = temp; //the first element
    }
    bool test = 1;
    for ( int i = 0; i < m; i++ ){
        if ( !test ) cout << " ";
        cout << b[i];
        test = 0;
    }
}

int main(){
    int m, n;
    cin >> m >> n;
    int a[n];
    //the disc are used
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
    }
    disc(m, n, a);
    return 0;
}