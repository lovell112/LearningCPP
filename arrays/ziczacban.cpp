#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n, m;
    cin >> n >> m;
    int s1 = 1;
    //duyet mang xuoi
    int a[n][m];
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < m; j ++ ){
            a[i][j] = s1;
            s1++;
        }
    }
    //duyet mang nguoc
    int b[n][m];
    for ( int i = 0; i < n; i++ ){
        int s2 = m*(i+1);
        for ( int j = 0; j < m; j ++ ){
            b[i][j] = s2;
            s2--;
        }
    }
    //neu so dong le thi se lay gia tri cua mang nguoc, neu so dong la 0 hoac chan thi lay gia tri mang xuoi
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < m; j ++ ){
            if ( i % 2 ) a[i][j] = b[i][j]; 
        }
    }
    //xuat mang
    for ( int i = 0; i < n; i++ ){
        bool test = 1;
        for ( int j = 0; j < m; j ++ ){
            if (!test) cout << " ";
            cout << a[i][j];
            test = 0;
        }
        cout << endl;
    }
    return 0;
}