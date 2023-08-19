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
    int b[n-1];
    for(int i = 0; i < n-1; i++) cin >> b[i];

    int a[n];
    a[0] = b[0];
    for(int i = 1; i < n-1; i++){
        a[i] = min(b[i-1], b[i]);
    }
    a[n-1] = b[n-2];

    int ans = 0;
    for(int i=0; i<n; i++) ans += a[i];

    cout << ans << endl;
}