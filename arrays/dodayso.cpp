#include <bits/stdc++.h>
using namespace std;


int main(){
    int a[100];
    int count = 0;
    //nhập mảng
    while ( cin >> a[count] ){
        count++;
    }
    // nếu số phần tử lớn hơn 3 thì làm tiếp
    if ( count > 2 ){
        cout << count << endl; //số lượng phần tử
        int s = 0;
        // tổng 
        for (int i = 0; i < count; i++){
            s += a[i];
        }
        cout << s << endl;
        // thuật toán sắp xếp
        for (int i = 0; i < count; i++){
            for( int j = 0; j < count - 1; j++ ){
                int c = a[j];
                if ( a[j] > a[j+1] ) {
                    a[j] = a[j+1];
                    a[j+1] = c;
                }
            }
        }
        // xuất mảng sau khi sắp xếp
        bool test = 1;
        for ( int i = 0; i < count; i++ ){
            if(!test) cout << " ";
            cout << a[i];
            test = 0;
        }
    // nếu số phần tử nhỏ hơn 3 thì NO
    } else {
        cout << "NO" << endl;
    }
    return 0;
}