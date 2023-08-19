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

#define ll long long
#define rep(i, n) for (ll i = 0;i < n;i++)

int main(){
    int n,m;
    cin >> n >> m;

    vector<ll> h(n);
    rep (i, n) cin >> h[i];

    vector<vector<ll> > g(n + 1, vector<ll>());
    ll a, b;
    rep (i, m) {
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans = 0;

    rep (i,n){
        bool flg = true;
        rep (j,g[i].size()) if(h[i] <= h[g[i][j]]) flg = false;
        if(flg) ans++;
    }

    cout << ans << endl;
    return 0;
}