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
    int n,m,x;
    cin >> n >> m >> x;
    int c[n],a[n][m];
    for(int i=0;i<n;i++){
        cin >> c[i];
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    int ans = INT_MAX;
    bool ok = false;

    for (int bit = 0; bit < (1<<n); ++bit){
        int sum = 0;
        int algo[m];
        for(int i=0;i<m;i++) algo[i] = 0;
        for (int i = 0; i < n; ++i){
            if (bit & (1<<i)){
                sum += c[i];
                for(int j = 0; j < m;j++){
                    algo[j] += a[i][j];
                }
            }
        }

        bool flg = true;
        for(int i = 0; i < m; i++){
            if(algo[i] < x) flg = false;
        }
        if(flg){
            ok = true;
            ans = min(ans, sum);
        }
    }

    cout << (ok ? ans : -1) << endl;
}