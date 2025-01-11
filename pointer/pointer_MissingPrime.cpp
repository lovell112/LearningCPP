#include <bits/stdc++.h>
using namespace std;

bool primeNumber(int a){
    bool check = 1;
    for(int j = 2; j <= sqrt(a); j++){
        if(a % j == 0){
            return 0;
        }
    }
    if(a > 1) return 1;
    else return 0;
}

int *missingPrime(int m, int M, int &size){

    for(int i = m; i <= M; i++){
        if(i % 2 == 0 && i != 2) continue;
        if(primeNumber(i)) size = size + 1;
    }
    int n = size;
    int *missingPrime = new int[n];

    n = 0;

    for(int i = m; i <= M; i++){
        if(i % 2 == 0 && i != 2) continue;
        if(primeNumber(i)) missingPrime[n++] = i;
    }

    return missingPrime;
}

int main(){
    int m, M;
    cin >> m >> M;
    // int *missingPrime = new int[M-m];
    int size = 0;
    int *ptr = missingPrime(m, M, size);
    // for(int i = m; i <= M; i++){
    //     if(i % 2 == 0 && i != 2) continue;
    //     if(primeNumber(i)) *(ptr + (count++)) = i;
    // }
    for(int i = 0; i < size; i++) cout << *(ptr + i) << " ";
    delete[] ptr;
    return 0;
}