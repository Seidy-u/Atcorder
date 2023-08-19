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
#include <climits>
using namespace std;

int main(){
    int x,n;
    cin >> x >> n;
    vector<int> p(102, 0);
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        p[tmp] = 1;
    }

    int down;
    for(int i = x; i >= 0; i--){
        if(p[i] == 0){
            down = i;
            break;
        }
    }

    int up ;
    for(int i = x; i <= 101; i++){
        if(p[i] == 0){
            up = i;
            break;
        }
    }

    int ans;
    if(x-down <= up-x) ans = down;
    else ans = up;
    cout << ans << endl;
    return 0;
}