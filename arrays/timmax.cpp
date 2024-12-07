#include <iostream>
using namespace std;

const int maxn = 100;

void inputarr(int n, int a[maxn]){
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
    }
}

int max(int n, int a[maxn]){
    int max = -100;
    for ( int i = 0; i < n; i++ ){
        if ( a[i] > max ) max = a[i];
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    inputarr(n, &a[n]);
    cout << max(n, &a[n]);
    return 0;
}