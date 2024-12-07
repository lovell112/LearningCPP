#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0,  s = 0;
    while ( n > -1 ){
        cin >> n;
        if ( n == -1 ) break;
        count += 1;
        s += n;
    }
    float med = 1.0*s/count;
    if ( med < 4 ) cout << "F" << endl;
    else if ( med >= 4 && med < 5.5 ) cout << "D" << endl;
    else if ( med >= 5.5 && med < 7 ) cout << "C" << endl;
    else if ( med >= 7 && med < 8.5 ) cout << "B" << endl;
    else if ( med >= 8.5 ) cout << "A" << endl;
    return 0;
}