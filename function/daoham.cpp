#include <iostream>
#include <math.h>
using namespace std;



//ham so
void check(int a, int b){
    if ( a == 0 ) return;
    else if ( a == 1 && b == 1 ) cout << "x";
    else if ( a == 1 && b != 0 ) cout << "x^" << b;
    else if ( b == 1 ) cout << a << "x";
    else if ( b == 0 ) cout << a;
    else cout << a << "x^" << b;
    
}



//dao ham
void daoham(int a, int b){
    if ( a*b == 0 ) return;
    int na = a*b;
    int nb = b - 1;
    if ( na == 1 && nb == 1 ) cout << "x";
    else if ( nb == 1 ) cout << na << "x";
    else if ( nb == 0 ) cout << na;
    else cout << na << "x^" << nb; 
}



int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    //he so
    for ( int i = 0; i < n; i++ ) cin >> a[i];
    //so mu
    for ( int i = 0; i < n; i++ ) cin >> b[i];
    //nhap diem x
    int x;
    cin >> x;
    //xuat ham so
    bool test1 = 1;
    for ( int i = 0; i < n; i++){
        if ( !test1 ) cout << "+";
        check(a[i], b[i]);
        if ( a[i] ) test1 = 0; // he so a khac 0 thi se +
        else test1 = 1;
    }
    cout << endl;
    int s = 0;
    //gia tri ham so tai diem x
    for ( int i = 0; i < n; i++ ){
        s += a[i] * pow(x, b[i]);
    }
    cout << s << endl;
    //dao ham
    bool test2 = 1;
    for ( int i = 0; i < n; i++){
        if (a[i]*b[i] == 0) continue;
        if ( !test2 ) cout << "+";
        daoham(a[i], b[i]);
        if ( a[i] ) test2 = 0; // he so khac 0 thi +
        else test2 = 1;
    }
    cout << endl;
    return 0;
}