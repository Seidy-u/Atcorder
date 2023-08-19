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
    int t[n];
    for(int i=0;i<n;i++) cin >> s[i] >> t[i];

    map<string, int> score;

    for(int i=0;i<n;i++){
        if(score[s[i]] == 0) score[s[i]] = t[i];
    }

    int best = 0;
    string name;
    for(auto itr = score.begin(); itr != score.end(); ++itr){
        if(best < itr->second){
            best = max(best,itr->second);
            name = itr->first;
        }
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        if(name == s[i] && best == t[i]){
            ans = i+1;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}