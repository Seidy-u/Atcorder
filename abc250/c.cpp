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
    int n,q;
    cin >> n >> q;

    int ans[n];
    int idx[n+1];
    for(int i=0;i<n;i++){
        ans[i] = i+1;
        idx[i+1] = i;
    }

    int x;
    for(int i=0;i<q;i++){
        cin >> x;
        int first = idx[x];
        int second = first + 1;
        if(first == n-1) second -= 2;
        int num = ans[second];

        swap(ans[first], ans[second]);

        swap(idx[x], idx[num]);
    }
    for(int i=0;i<n;i++){
        cout << ans[i];
        if(i == n-1) break;
        cout << ' ';
    }
    return 0;
}