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
#include <tuple>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n],y[n];
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];
    string s;
    cin >> s;
    map<int, int> best_r;
    map<int, int> best_l;
    bool flg = false;

    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            if(best_l.count(y[i]) && x[i] < best_l[y[i]]) flg = true;
        }
        if(s[i]=='L'){
            if(best_r.count(y[i]) && best_r[y[i]] < x[i]) flg = true;
        }

        if(s[i] == 'R'){
            if(best_r.count(y[i])) best_r[y[i]] = min(x[i],best_r[y[i]]);
            else best_r[y[i]] = x[i];
        }
        if(s[i] == 'L'){
            if(best_l.count(y[i])) best_l[y[i]] = max(x[i],best_l[y[i]]);
            else best_l[y[i]] = x[i];
        }
    }

    cout << (flg ? "Yes" : "No") << endl;
}