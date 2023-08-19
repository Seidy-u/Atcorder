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
    string s;
    cin >> s;
    long long cnt_R = 0, cnt_G = 0, cnt_B = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'R') cnt_R++;
        if(s[i] == 'G') cnt_G++;
        if(s[i] == 'B') cnt_B++;
    }

    long long ans = cnt_R * cnt_G * cnt_B;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if((j+j-i)>=n) break;
            if(s[i] != s[j] && s[i] != s[j+j-i] && s[j] != s[j+j-i]) ans--;
        }
    }

    cout << ans << endl;
}