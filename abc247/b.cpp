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
    string s[n],t[n];
    for(int i=0;i<n;i++) cin >> s[i] >> t[i];

    bool flg_s = true;
    bool flg_t = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j) continue;
            if(s[i] == s[j] || s[i] == t[j]) flg_s = false;
            if(t[i] == t[j] || t[i] == s[j]) flg_t = false;
        }
        if(!flg_s && !flg_t){
            cout << "No" << endl;
            return 0;
        }
        flg_s = true;
        flg_t = true;
    }
    cout << "Yes" << endl;
}