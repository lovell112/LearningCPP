#include <bits/stdc++.h>
using namespace std;

struct polynomial{
    int c;
    int p;
    int no;
};

void inputPolynomial(int n, polynomial a[]){
    for ( int i = 0; i <= n; i++) {
        cin >> a[i].c;
        a[i].p = n - i;
    }
}

void outputPolynomial(int n, polynomial a[]){
    bool plus = 0;
    for ( int i = 0; i <= n; i++){
        if (plus) cout << "+";
        if(a[i].c == 0 && a[i].p != 0) continue;
        else if(a[i].c == 0 && a[i].p == 0) {
            cout << "=";
            break;
        }
        else if(a[i].p == 1 && a[i].c != 1) cout << a[i].c << "x";
        else if(a[i].p != 0 && a[i].c != 1) cout << a[i].c << "x^" << a[i].p;
        else if(a[i].p == 1 && a[i].c == 1) cout << "x";
        else if(a[i].p != 0 && a[i].c == 1) cout << "x^" << a[i].p;
        else cout << a[i].c;
        a[i+1].c != 0 ? plus = 1 : plus = 0;
        if(i == n) cout << "=";
    }
}

void solution(int n, polynomial a[]){
    int t = 0;
    for( int i = 1; i <= n; i++){
        for(int j= -50; j<= 50; j++){
            int fx = 0;
            for(int k = 0; k <= n; k++){
                fx += a[k].c * pow(j, a[k].p);
            }
            if(fx == 0) a[t++].no = j;
        }
    }
    for(int j = 0; j < t; j++){
        cout << a[j].no << " ";
    }
}

int main(){
    int n;
    cin >> n;
    polynomial a[n];
    inputPolynomial(n, a);
    outputPolynomial(n, a);
    solution(n, a);
    return 0;
}