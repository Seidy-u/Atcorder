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
    int a[n+1], b[n];
    for(int i = 0; i < n+1; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    long long ans = 0;

    for(int i = 0; i < n; i++){
        int death = min(a[i], b[i]);
        ans += death;
        b[i] -= death;
        death = min(a[i+1], b[i]);
        ans += death;
        a[i+1] -= death;
    }

    cout << ans << endl;
}