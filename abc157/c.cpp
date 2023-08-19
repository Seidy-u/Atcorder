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

#define ll long long

int main(){
    ll n,m;
    cin >> n >> m;
    vector<ll> s(m);
    vector<char> c(m);
    for(int i = 0;i < m;i++) cin >> s[i] >> c[i];

    ll minNum = 0;
    if(n != 1) minNum = (ll)pow(10, n - 1);

    string ans = "";
    for(int i = minNum;i < pow(10, n);i++){
        ans = to_string(i);
        bool flg = true;
        
        for(ll j = 0;j < m;j++) 
            if(ans[s[j] - 1] != c[j])
                flg = false;

        if(flg) {
            cout << ans << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
}