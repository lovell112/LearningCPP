#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, i = 0, s = 0;
    cin >> n;
    while ( i <= n ){
        s += i;
        i++;
    }
    cout << s << endl;
    return 0;
}