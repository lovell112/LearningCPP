// Nhập vào các điểm tọa độ OXY.Bạn hãy đếm xem có bao nhiêu đường thẳng song song với trục OX và OY ( 2 điểm bất kỳ nối lại sẽ tạo 1 đường thẳng )
// Lưu ý : 1 điểm thì không phải là 1 đường thẳng , nếu 1 đường thẳng nằm trong đường thẳng khác thì sẽ tính đường thẳng dài nhất 

// Điều kiện nhập : Không nhập lại tọa độ đã nhập trước đó , tất cả là số nguyên
// Input:
// Dòng 1 : Nhập vào n
// Dòng 2 : Nhập vào xi
// Dòng 3 : Nhập vào yi
// Ouput: Theo yêu cầu đề bài


#include <bits/stdc++.h>
using namespace std;

struct point{
    int x;
    int y;
};

void inputPoint(int n, point a[]){
    for (int i = 0; i < n; i++) cin >> a[i].x;
    for (int i = 0; i < n; i++) cin >> a[i].x;
}

int main(){
    int n;
    cin >> n;
    point a[n];
    inputPoint(n, a);
    
    return 0;
}