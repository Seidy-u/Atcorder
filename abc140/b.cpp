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
    int n;
    cin >> n;
    int a[n], b[n], c[n-1];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    for(int i=0; i<n-1; i++) cin >> c[i];

    int ans = b[a[0]-1];
    for(int i=1; i<n; i++){
        ans += b[a[i]-1];
        if(a[i]-a[i-1] == 1) ans += c[a[i-1]-1];
    }
    cout << ans << endl;
}