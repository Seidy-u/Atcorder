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
    int n,x,y;
    cin >> n >> x >> y;
    x--; y--;
    int ans[n-1];
    for(int i=0; i<n; i++) ans[i] = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int tmp = min(j-i, abs(x-i)+abs(j-y)+1);
            ans[tmp-1]++;
        }
    }
    for(int i=0; i<n-1; i++) cout << ans[i] << endl;
}