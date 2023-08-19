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
    string s;
    cin >> n >> s;
    int w[n];

    vector<int> adult;
    vector<int> child;
    for(int i=0; i<n; i++){
        cin >> w[i];
        if(s[i] == '0') child.push_back(w[i]);
        else adult.push_back(w[i]);
    }
    sort(child.begin(), child.end());
    sort(adult.begin(), adult.end());

    int ans_child = 0;
    for(int i=0; i<child.size(); i++){
        int border = child[i]+1;
        int pre_ans = 0;
        pre_ans = i;
        pre_ans = pre_ans + 1 + adult.size() - (lower_bound(adult.begin(),adult.end(),border) - adult.begin());
        ans_child = max(ans_child, pre_ans);
    }

    int ans_adult = 0;
    for(int i=0; i<adult.size(); i++){
        int border = adult[i];
        int pre_ans = 0;
        pre_ans = adult.size() - i;
        pre_ans = pre_ans + (lower_bound(child.begin(),child.end(),border) - child.begin());
        ans_adult = max(ans_adult, pre_ans);
    }
    
    cout << max(ans_child, ans_adult) << endl;
}