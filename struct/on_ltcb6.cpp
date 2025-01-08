#include <bits/stdc++.h>
using namespace std;

const int M = 1000;

struct coordination{
    int x;
    int y;
};

struct circle{
    coordination center;
    int r;
    bool check;
};

// void inputCircle(int n, circle a[]){
//     for ( int i = 0; i < n; i++ ){
//         cin >> a[i].center.x >> a[i].center.y >> a[i].r;
//     }
// }

float distance(circle a, circle b){
    return sqrt(pow(a.center.x - b.center.x, 2) + pow(a.center.y - b.center.y, 2));
}

int main(){
    int n;
    cin >> n;
    circle a[M];
    // inputCircle(n, a);
    for ( int i = 0; i < n; i++ ){
        cin >> a[i].center.x >> a[i].center.y >> a[i].r;
    }
    for ( int i = 0; i < n; i++ ){
        a[i].check = 1;
    }
    int count = 0;
    for ( int i = 0; i < n; i++ ){
        for ( int j = i+1; j < n; j++ ){
            float d = distance(a[i], a[j]);
            if ( (d < abs(a[i].r + a[j].r)) && d != 0 ){
                if ( a[i].check ){
                    count++;
                    a[i].check = 0;
                }
                if ( a[j].check ){
                    count++;
                    a[j].check = 0;
                }
            }
        }
    }
    cout << count;
    return 0;
}