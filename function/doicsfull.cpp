#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

stack <char> st;

void change2(int n){
    while ( n != 0 ){
        st.push(n % 2 + 48);
        n /= 2;
    }
    while (!st.empty()){
        cout << (char)st.top();
        st.pop();
    }
}

void change8(int n){
    while ( n != 0 ){
        st.push(n % 8 + 48);
            n /= 8;
    }
    while (!st.empty()){
        cout << (char)st.top();
        st.pop();
    }
}

void change16(int n){
    while ( n != 0 ){
        if ( n % 16 < 10 ) st.push(n % 16 + 48);
        else if (n % 16 == 10) st.push(65);
        else if (n % 16 == 11) st.push(66);
        else if (n % 16 == 12) st.push(67);
        else if (n % 16 == 13) st.push(68);
        else if (n % 16 == 14) st.push(69);
        else if (n % 16 == 15) st.push(70);
        n /= 16;
    }
    while (!st.empty()){
        cout << (char)st.top();
        st.pop();
    }
}

int main(){
    int n, a;
    cin >> n >> a;
    if (a == 1) change8(n);
    else if (a == 2) change16(n);
    else change2(n);
    return 0;
}