#include <iostream>
using namespace std;

struct mem{
    int order;
    bool beKilled;
};

void josephus(int n, int m){
    mem *member = new mem[n];
    int *killed = new int[n];
    for(int i = 0; i < n; i++){
        member[i].order = i+1;
        member[i].beKilled = 0;
    }
    int count = 0;
    int kill = 0;
    int reset = n;
    while(reset > 0){
        for(int i = 0; i < n; i++){
            if(member[i].beKilled) continue;
            count++;
            if(count == m){
                count = 0;
                killed[kill++] = member[i].order;
                member[i].beKilled = 1;
                reset--;
            }
        }
    }
    delete[] member;
    for (int i = 0; i < n; i++) cout << killed[i] << " ";
    delete[] killed;
    // return killed;
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    josephus(n,m);
    // int *people = josephus(n, m);
    // for(int i = 0; i < n; i++) cout << people[i] << " ";
    // delete[] people;
    return 0;
}