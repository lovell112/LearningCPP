#include <bits/stdc++.h>
using namespace std;

void  importarr(string str){
    getline(cin, str);
}

int main(){
    string str;
    importarr(str);
    int n = str.length();
    int newn = 0;
    for( int i = 0; i < n; i++ ){
        int x = (int)str[i];
        if ( (x >= 65 && x <= 90) || (x >= 97 && x <= 122 ) || (x >= 48 && x <= 57) ){
            str[newn++] = str[i];
        }
    }
    cout << str;
    bool test = 1;
    for ( int i = 0; i < newn/2; i++ ){
        if(str[i]!=str[newn-1-i]){
            cout << "NO";
            test = 0;
        }
        cout << str[i] << " " << str[newn-1-i] << endl;
    }
    return 0;
}