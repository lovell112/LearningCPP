#include <iostream>
using namespace std;

void inputarr(int n, int a[100]){
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
    }
}

void outputarr(int n, int a[100]){
    bool test = 1;
    for ( int i = 0; i < n; i++ ){
        if (!test) cout << " ";
        cout << a[i];
        test = 0;
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    inputarr(n, &a[n]);
    outputarr(n, &a[n]);
    return 0;
}