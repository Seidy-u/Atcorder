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
    int k[m];
    vector<vector<int> > s(20, vector<int>(20));
    int p[m];

    for(int i=0;i<m;i++){
        cin >> k[i];
        int tmp = k[i];
        for(int j=0;j<tmp;j++){
            cin >> s[i][j];
        }
    }
    for(int i=0;i<m;i++) cin >> p[i];

    int ans = 0;

    for (int bit = 0; bit < (1<<n); ++bit){
        vector<int> light(m, 0);
        for (int i = 0; i < n; ++i){
            if (bit & (1<<i)){
                
            }
        }
    }

    return 0;
}