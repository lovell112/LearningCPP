#include <bits/stdc++.h>
using namespace std;


// lỗi ở function
void arr(int n, int m, int a[]){
    for ( int i = 0; i <= m-n; i++ ){
        a[i] = n + i;
    }
}

bool primenumber(int a){
    bool test = 1;
    for ( int i = 2; i <= (int)sqrt(a); i++ ){
        if ( a % i == 0 ) test = 0;
    }
    if ( test && a > 1 ) return 1;
    else return 0;
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[m-n+1];
    for ( int i = 0; i <= m-n; i++ ){
        a[i] = n + i;
    }
    // arr(n, m, &a[m-n+1]);
    bool test = 1;
    for(int i = 0; i <= m-n; i++){
        if(!test) cout << "\n\n";
        if(primenumber(a[i])) cout << a[i];
        else continue;
        test = 0;
    }
    return 0;
}