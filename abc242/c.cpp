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
    int n;
    cin >> n;
    long long ans = 0;
    long long box[9][n];
    box[0][0] = 1; box[1][0] = 1; box[2][0] = 1;
    box[3][0] = 1; box[4][0] = 1; box[5][0] = 1;
    box[6][0] = 1; box[7][0] = 1; box[8][0] = 1;

    for(int i = 1; i < n; i++){
        for(int j = 0; j < 9; j++){
            if(j == 0){
                box[j][i] = (box[j][i-1] + box[j+1][i-1])%998244353 ;
                continue;
            }
            if(j == 8){
                box[j][i] = (box[j-1][i-1] + box[j][i-1])%998244353 ;
                continue;
            }
            box[j][i] = (box[j-1][i-1] + box[j][i-1])%998244353 ;
            box[j][i] += (box[j+1][i-1])%998244353 ;
        }
    }

    for(int i = 0; i < 9; i++){
        ans += (box[i][n-1])%998244353;
        ans %= 998244353;
    }

    cout << ans << endl;
}