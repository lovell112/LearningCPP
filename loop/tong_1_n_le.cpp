#include <iostream>
using namespace std;

int main(){
    int n, i = 0, s = 0;
    cin >> n;
    while ( i <= n ){
        if ( i % 2 != 0 ){
            s += i;
        }
        i++;
    }
    cout << s << endl;
    return 0;
}