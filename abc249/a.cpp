#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;

int main(){
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int takahashi_d = 0;
    int aoki_d = 0;

    int time = x;
    while(time > 0){
        if(a < time){
            takahashi_d += (a * b);
            time -= a;
        }
        else{
            takahashi_d += (time * b);
            break;
        }
        time -= c;
    }

    time = x;
    while(time > 0){
        if(d < time){
            aoki_d += (d * e);
            time -= d;
        }
        else{
            aoki_d += (time * e);
            break;
        }
        time -= f;
    }



    // for(int i=0; i<x; i++){
    //     a_d += b;
    //     if(i%a==0) i+=c;
    // }
    // for(int i=0; i<x; i++){
    //     b_d += e;
    //     if(i%d==0) i+=f;
    // }
    if(takahashi_d > aoki_d) cout << "Takahashi" << endl;
    if(takahashi_d < aoki_d) cout << "Aoki" << endl;
    if(takahashi_d == aoki_d) cout << "Draw" << endl;
}