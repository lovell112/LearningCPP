#include <iostream>
#include <math.h>
using namespace std;

bool test(int a){
    if ( a == (int)sqrt(a)*(int)sqrt(a) ) return 1;
    else return 0;
}

int main(){
    int n, s = 0;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    for ( int i = 0; i < n; i++){
        if ( test(a[i]) ) s += a[i];
    }
    cout << s << endl;
    return 0;
}