#include <bits/stdc++.h>
using namespace std;

void addnumber(int n, int pos, int add, int a[]){
    // arrange position +1
    for ( int i = n; i > pos; i-- ){
        a[i] = a[i-1];
    }
    a[pos] = add;
    bool test = 1;
    for ( int i = 0; i < n + 1; i++ ){
        if (!test) cout << " ";
        cout << a[i];
        test = 0;
    }
}

int main(){
    int pos, add;
    cin >> pos >> add;
    int n = 0;
    int a[100];
    while ( cin >> a[n] ){
        n++;
        if ( n == 100 ) break;
    }
    addnumber(n, pos, add, a);
    return 0;
}