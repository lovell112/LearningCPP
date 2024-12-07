#include <bits/stdc++.h>
using namespace std;

void countchar(int n, char a[]){
    char b[n];
    int count = 0;
    // remove redundant char
    for ( int i = 0; i < n; i++ ){
        bool test = 0;
        for ( int j = 0; j < n; j++ ){
            if ( a[i] == b[j] ){
                test = 1;
                break;
            }
        } if ( test == 0 ){
            b[count] = a[i];
            count++;
        }
    }
    // arrange char
    for ( int i = 0; i < count; i++ ){
        for ( int j = 1; j < count; j++ ){
            if ( (int)b[j-1] > (int)b[j] ){
                int temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
            }
        }
    }
    // number of char
    bool end = 1;
    for ( int i = 0; i < count; i++ ){
        int numofchar = 0;
        for ( int j = 0; j < n; j++ ){
            if ( b[i] == a[j] ) numofchar++;
        }
        if(!end) cout << endl;
        cout << b[i] << ":" << numofchar;
        end = 0;
    }
}

int main(){
    int n = 0;
    char a[100];
    while ( cin >> a[n] ) n++;
    countchar(n, a);
    return 0;
}