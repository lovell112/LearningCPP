#include <iostream>
#include <math.h>
using namespace std;

int gcw(int a, int b){
    while ( b != 0 ){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << a*b/gcw(a, b) << endl;
    return 0;
}