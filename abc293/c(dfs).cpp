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

int h,w;
int ans = 0;
map<int, bool> seen;
vector<vector<int> > a;

void dfs(int x, int y){
    if(x >= h || y >= w) return;

    if(seen[a[x][y]]) return;

    if(x == h-1 && y == w-1){
        ans++;
        return;
    }

    seen[a[x][y]] = true;

    dfs(x+1, y);
    dfs(x, y+1);
    seen[a[x][y]] = false;
    return;
}

int main(){
    cin >> h >> w;
    a.resize(h, vector<int>(w));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> a[i][j];
        }
    }

    dfs(0, 0);
    cout << ans << endl;
}