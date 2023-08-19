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
    int h,w;
    cin >> h >> w;
    int a[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) cin >> a[i][j];
    }

    vector<int> sum_cols(h, 0);
    vector<int> sum_rows(w, 0);
    
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            sum_cols[i] += a[i][j];
            sum_rows[j] += a[i][j];
        }
    }
    
    int ans[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            ans[i][j] = sum_cols[i] + sum_rows[j] - a[i][j];
        }
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}