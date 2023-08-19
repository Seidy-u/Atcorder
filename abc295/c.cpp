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
    int a;
    map<int, int> socks;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin >> a;
        socks[a]++;
        if(socks[a]==2){
            ans++;
            socks[a]=0;
        }
    }
    cout << ans << endl;
}