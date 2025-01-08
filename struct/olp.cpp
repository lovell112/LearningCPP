#include <bits/stdc++.h>
using namespace std;

struct coordinates{
    int x, y;
};

string f(string D, int n, int i){
    string D2 = "";
    for(char child : D){
        if(i >= n){
            return D;
        }
        else {
            if(child == 'x'){
                D2 += f("xLyFX", n, i+1);
            }
            else if(child == 'y'){
                D2 += f("RFyRx", n, i+1);
            } else {
                D2 += child;
            }
        }
    }
    return D2;
}

int main(){
    int steps, n;
    cin >> steps >> n;
    string D = "Xy";
    D = f(D, n, 0);
    // cout << D;
    coordinates a;
    a.x = 0;
    a.y = 0;
    int corner = 0;
    for(char child : D){
        if(steps == 0) break; 
        // cout << child;
        if(child == 'R') corner -= 90;
        else if (child == 'L') corner += 90;
        else if (child == 'F') {
            if (corner%360 == 0){
                a.x++;
                steps--;
            }
            else if (corner%360 == 90 || corner%360 == -270){
                a.y++;
                steps--;
            }
            else if (corner%360 == 180 || corner%360 == -180){
                a.x--;
                steps--;
            }
            else if (corner%360 == -90 || corner%360 == 270){
                a.y--;
                steps--;
            }
        }
    }
    cout << a.x << " " << a.y;
    return 0;
}