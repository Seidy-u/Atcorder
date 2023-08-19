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
    char x[26];
    map<char, int> weight;
    for(int i=0; i<26; i++){
        cin >> x[i];
        weight[x[i]] = i+1;
    }
    weight['0'] = 0;
    
    int n;
    cin >> n;

    pair<long long, string> s[n];
    for(int i=0; i<n; i++){
        string tmp;
        cin >> tmp;
        s[i].second = tmp;
        while(tmp.size() < 10) tmp += '0';
        s[i].first = 0;
        for(int j=0; j<10; j++){
            s[i].first *= 27;
            s[i].first += weight[s[i].second[j]];
        }
    }

    sort(s, s+n);

    for(int i=0; i<n; i++) cout << s[i].second << endl;
}