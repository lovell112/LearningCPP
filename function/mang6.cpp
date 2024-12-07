#include <iostream>
#include <math.h>
using namespace std;

bool primenumbers(int a){
    bool check = 0;
    for (int i = 2; i <= (int)sqrt(a); i++) {
        if ( a % i == 0 ){
            check = 1;
            break;
        }
    }
    if ( check == 0 && a != 1 ) return true;
    else return false;
}

bool mainsnumber(int a){
    if ( a == (int)sqrt(a)*(int)sqrt(a) && a >= 1)  return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
    }
    bool test = 1;
    for ( int i = 0; i < n; i++ ){
        if (!test) cout << " ";
        if (mainsnumber(a[i])) {
            cout << a[i];
            test = 0;
        } else test = 1;
    }
    cout << endl;
    test = 1;
    for ( int i = 0; i < n; i++ ){
        if (!test) cout << " ";
        if ( primenumbers(a[i]) ) {
            cout << a[i];
            test = 0;
        } else test = 1;
    }
    return 0;
}