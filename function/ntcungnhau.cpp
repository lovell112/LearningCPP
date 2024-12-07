#include <iostream>
#include <cmath>
using namespace std;

bool check(int a, bool test = 0){
    for ( int i = 2; i <= (int)sqrt(a); i++ ){
        if ( a % i == 0 ) test = 1;
    }
    if ( test == 0 ) return 1;
    else return 0;
}

bool gc(int a, int b, int temp){
    while ( temp ){
        temp = a % b;
        a = b;
        b = temp;
    }
    if ( a == 1 ) return 1;
    else return 0;
}

int main(){
    int n, m, temp = -1;
    bool testn = 0, testm = 0;
    cin >> n >> m;
    if ( (check(n, testn) && check(m, testm)) || gc(n, m, temp) ) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}