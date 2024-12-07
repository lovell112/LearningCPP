#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

stack <int> st;

void change(int n){
    while (n != 0){
        st.push( n % 2 );
        n /= 2;
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}

int main(){
    int n;
    cin >> n;
    change(n);
    return 0;
}