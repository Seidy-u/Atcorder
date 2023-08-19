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

vector<vector<long long> > G(200001);

vector<bool> seen(200001, false);

void dfs(int v){
    seen[v] = true; // v を訪問済にする
    cout << v << ' ';
    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]){ 
        if (seen[next_v]){
            continue; // next_v が探索済だったらスルー
        }
        dfs(next_v); // 再帰的に探索
        cout << v << ' ';
    }
}

int main(){
    // 頂点数
    int N;
    cin >> N;

    // グラフ入力受取 (ここでは無向グラフを想定)
    for (int i = 0; i < N-1; ++i){
        long long a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    for(int i = 1; i <= N; i++) sort(G[i].begin(), G[i].end());
    // 頂点 0 をスタートとした探索
    dfs(1);
}