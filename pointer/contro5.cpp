#include <bits/stdc++.h>
using namespace std;

bool isCondition(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(arr[i] == arr[j] + arr[k] && arr[i] != arr[j] && arr[j] != arr[k] && arr[i] != arr[k]) return 1;
            }
        }
    }
    return 0;
}

int main(){
    int n;
    do cin >> n;
    while (n<3);
    int *arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    isCondition(arr, n) ? cout << "YES" : cout << "NO";
    delete[] arr;
    return 0;
}