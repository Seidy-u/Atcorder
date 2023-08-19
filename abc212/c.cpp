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
    int n,m;
    cin >> n >> m;

    int a[n],b[m];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    
    pair<int, char> ab[n+m];
    for(int i=0;i<n;i++){
        ab[i].first = a[i];
        ab[i].second = 'a';
    }
    for(int i=0;i<m;i++){
        ab[n+i].first = b[i];
        ab[n+i].second = 'b';
    }

    sort(ab, ab+n+m);

    int ans = INT_MAX;
    for(int i=0;i<n+m-1;i++)
        if(ab[i].second != ab[i+1].second) ans = min(ans, abs(ab[i].first - ab[i+1].first));


    cout << ans << endl;
    return 0;
}