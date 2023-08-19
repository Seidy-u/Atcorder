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

void dfs(int v, vector<int> &c, vector< vector<int> > &g, vector<int> &ans, vector<int> &color, vector<bool> &seen){
    if(seen.at(v)) return;
    else seen.at(v) = true;

    // solve
    if(color[c[v]] == 0) ans.push_back(v);
    color[c[v]]++;

    for(int u : g.at(v)){
        dfs(u, c, g, ans, color, seen);
    }
    color[c[v]]--;
}




int main(){
    int n;
    cin >> n;
    vector<int> c(n+1);
    for(int i=1; i<=n; i++) cin >> c.at(i);

    vector< vector<int> > g(n+1, vector<int> (0));
    for(int i=1; i<n; i++){
        int a,b;
        cin >> a >> b;
        g.at(a).push_back(b);
        g.at(b).push_back(a);
    }
    vector<int> ans;
    vector<int> color(1000000, 0);
    vector<bool> seen(n+1, false);
    dfs(1, c, g, ans, color, seen);
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++) cout << ans[i] << endl;
    return 0;
}