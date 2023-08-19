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
    string s[n];
    for(int i=0; i<n;i++) cin >> s[i];

    vector<int> times(10, 0);
    int ans = INT_MAX;

    //i=秒
    for(int i=0; i<10; i++){

        //縦
        for(int j=0; j<n; j++){
            int time = i;

            //重複
            for(int k=j+1; k<n; k++){
                if(s[j][i] == s[k][i]) time += 10;
            }

            times[s[j][i]-'0'] = max(times[s[j][i]-'0'], time);
        }
    }

    for(int i = 0; i<10; i++) ans = min(times[i], ans);

    cout << ans << endl;
    return 0;
}