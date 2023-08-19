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

int dfs(int v, int even, int odd, int ans, vector< vector<int> > &g, vector<bool> &seen){
    if(seen.at(v)) return ans;
    else seen.at(v) = true;

    if(v % 2 == 0) even++;
    else odd++;
    if(even == odd) ans++;

    for(int u : g.at(v)){
        ans = dfs(u, even, odd, ans, g, seen);
    }
    if(v % 2 == 0) even--;
    else odd--;

    return ans;
}



int main(){
    int n;
    cin >> n;
    vector< vector<int> > g(n, vector<int>(0));
    for(int i=0; i<n-1; i++){
        int a,b;
        cin >> a >> b;
        g.at(a).push_back(b);
        g.at(b).push_back(a);
    }
    int ans;
    vector<bool> seen(n, false);
    ans = dfs(0,0,0,0,g,seen);
    cout << ans << endl;
    return 0;
}