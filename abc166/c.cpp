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
    int n,m;
    cin >> n >> m;
    vector<int> h[n];
    for(int i=0;i<n;i++) cin >> h[i];
    vector<int> a[m],b[m];
    for(int i=0;i<m;i++) cin >> a[i] >> b[i];

    set<int> ans;

    for(int i=0;i<m;i++){
        if(h[a[i-1]] == h[b[i-1]]) continue;
        if(h[a[i-1]] > h[b[i-1]]){
            if(ans.find(h[b[i-1]])) ans.erase(ans[h[b[i-1]]]);
            ans.insert(h[a[i]]);
        }
        else{
            if(ans.find(h[a[i-1]])) ans.erase(ans[h[a[i-1]]]);
            ans.insert(h[b[i-1]]);
        }
    }
    cout << ans.size() << endl;
}