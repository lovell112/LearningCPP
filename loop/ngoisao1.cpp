#include <bits/stdc++.h>
using namespace std;

int main(){
    int h;
    cin >> h;
    for ( int i = 1; i <= h; i++ ){
        for ( int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
}
