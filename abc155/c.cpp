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
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s;
    for(int i=0; i<n; i++){
        string tmp;
        cin >> tmp;
        s.push_back(tmp);
    }
    sort(s.begin(), s.end());
    
    int max_cnt = 0;
    int cnt = 1;
    for(int i=0; i<(s.size()-1); i++){
        if(s.at(i)==s.at(i+1)){
            cnt++;
        }
        else{
            max_cnt = max(max_cnt, cnt);
            cnt = 1;
        }
    }
    max_cnt = max(max_cnt, cnt);

    if(max_cnt == 1){
        for(int i=0;i<s.size();i++){
            cout << s.at(i) << endl;
        }
        return 0;
    }

    vector<string> ans;
    cnt = 1;
    for(int i=0; i<(s.size()-1); i++){
        if(s.at(i)==s.at(i+1)){
            cnt++;
        }
        if(cnt == max_cnt){
            ans.push_back(s.at(i));
            cnt = 1;
        }
        if(s.at(i)!=s.at(i+1)){
            cnt = 1;
        }
    }


    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}