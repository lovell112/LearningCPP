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
    int a, b, s1, s2;
    int an = 0, bn = 1;
    while ( cin >> a >> b ){
        s1 = (a*bn + an*b);
        s2 = b*bn;
        an = s1;
        bn = s2;
    }
    cout << s1/gcw(s1, s2) << "/" << s2/gcw(s1, s2) << endl;
    return 0;
}