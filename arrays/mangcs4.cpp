#include <bits/stdc++.h>
using namespace std;



int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ){
            cin >> a[i][j];
        }
    }
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ){
            int temp = a[i][j];
            if ( a[i][j] > a[i][j+1] ){
                a[i][j] = a[i][j+1];
                a[i][j+1] = temp;
            }
            int temp2 = a[i][j];
            if ( a[i][j] > a[i+1][j] ){
                a[i][j] = a[i+1][j];
                a[i+1][j] = temp2;
            }
        }
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < m; j++ ){
            cin >> a[i][j];
        }
    }
    bool endline = 1;
    for ( int i = 0; i < n; i++ ){
        if (!endline) cout << endl;
        bool space = 1;
        if ( i % 2 == 0 ){
            for ( int j = 0; j < m; j++ ){
                if(!space) cout << " ";
                cout << a[i][j];
                space = 0;
            }
        }else if ( i % 2 == 1 ){
            for ( int j = m - 1; j >= 0; j-- ){
                if(!space) cout << " ";
                cout << a[i][j];
                space = 0;
            }
        }
        endline = 0;
    }
    return 0;
}
*/