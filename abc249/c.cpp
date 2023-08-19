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
    int n,k;
    cin >> n >> k;
    string s[n];
    for(int i=0; i<n; i++) cin >> s[i];

    map<char,int> cnt;
    for(int i=0; i<n; i++){
        for(int j=0; j<s[i].size(); j++){
            cnt[s[i].at(j)]++;
        }
    }




}

