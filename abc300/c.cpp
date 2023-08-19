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
    int h,w;
    cin >> h >> w;
    char c[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> c[i][j];
        }
    }
    int n=min(h,w);
    vector<int> ans(n+1, 0);

    vector<int> dx = {-1,-1,1,1}, dy = {-1,1,-1,1};

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(c[i][j] == '.') continue;
                int cnt = INT_MAX;
            for(int k=0; k<4; k++){
                int tmp_cnt=0;
                int s=i;
                int t=j;
                while(1){
                    s+=dx[k];
                    t+=dy[k];
                    if(s < 0 || h <= s || t < 0 || w <= t) break;
                    if(c[s][t] == '#') tmp_cnt++;
                    else break;
                }
                cnt=min(cnt, tmp_cnt);
            }
            ans[cnt]++;
        }
    }

    for(int i=1; i<n+1; i++) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}