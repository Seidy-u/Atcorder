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
    int n,m;
    cin >> n >> m;
    int p[m];
    string s[m];
    int max_p = 0;
    for(int i=0;i<m;i++){
        cin >> p[i] >> s[i];
        max_p = max(max_p,p[i]);
    }
    int solved[max_p+1];
    int wa[max_p+1];
    for (int i=0;i<(max_p+1);i++){
        solved[i] = 0;
        wa[i] = 0;
    }

    int ac_ans=0,wa_ans=0;

    for(int i=0;i<m;i++){
        if(s[i]=="AC"){
            if(solved[p[i]]==0){
                solved[p[i]]=1;
                ac_ans++;
                wa_ans+=wa[p[i]];
            }
        }
        if(s[i]=="WA"){
            if(solved[p[i]]==0){
                wa[p[i]]++;
            }
        }
    }

    cout << ac_ans << " " << wa_ans << endl;
}