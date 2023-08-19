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
    string s[h+1];
    for(int i=0;i<h;i++){
        cin >> s[i];
        s[i] += '#';
    }
    s[h] = '#'; 
    for(int i=1; i<w; i++) s[h] += '#';

    int yoko[h][w];
    int tate[h][w];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            yoko[i][j] = 0;
            tate[i][j] = 0;
        }
    }

    for(int i=0; i<h;i++){
        int idx = 0;
        int cnt = 0;
        for(int j=0; j<=w;j++){
            if(s[i][j] == '.') cnt++;
            else{
                for(int k=idx; k<j; k++) yoko[i][k] = cnt;
                cnt = 0;
                idx = j+1;
            }
        }
    }

    for(int i=0; i<w;i++){
        int idx = 0;
        int cnt = 0;
        for(int j=0; j<=h;j++){
            if(s[j][i] == '.') cnt++;
            else{
                for(int k=idx; k<j; k++) tate[k][i] = cnt;
                cnt = 0;
                idx = j+1;
            }
        }
    }

    int ans = 0;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            ans = max(ans, tate[i][j] + yoko[i][j] - 1);
        }
    }

    cout << ans << endl;
    return 0;
}