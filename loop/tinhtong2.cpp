#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    //dùng while nhập từng số
    while ( cin >> n ){
        if ( n == -1 ) break; // condition for stop the loop!
        int sum = 0;
        int num;
        //for để tách số ra thành từng chữ số đơn
        for ( int i = n; i != 0; i/=10 ){
            num = i%10;
            bool check = 0;
            if ( num >= 2 ) {
                //for để test số nguyên tố
                for ( int j = 2; j <= sqrt(num); j++ ){
                /*vì sô nào cx luôn chia hết cho 1 nên đk là j!=1, nếu tìm thấy bất kì j nào mà num%j=0 
                thì số đó không phải số nguyên tố*/
                    if ( num % j == 0 ){
                        check = 1;
                    }
                }
                if ( check == 0 ){
                    sum += num;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}