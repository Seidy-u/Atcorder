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

int main() {
    int n,k;
    cin >> n >> k;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    long long ans = 0;
    long long count = 0;

    for (int bit = 0; bit < (1<<n); ++bit){
        map<char,int> cnt;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) {
                for(int j=0; j < s[i].size(); ++j){
                    cnt[s[i].at(j)]++;
                }
            }
        }
        count = 0;
        for (const auto &item : cnt) {
            if(item.second == k) count ++;
        }

        ans = max(count, ans);
    }

    cout << ans << endl;
}