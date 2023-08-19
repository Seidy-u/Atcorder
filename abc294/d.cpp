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
    int n,q;
    cin >> n >> q;

    vector<int> ans;
    set<int> called;
    int nextcall = 1;

    for(int i=0; i<q; i++){
        int event; cin >> event;

        if(event==1){
            called.insert(nextcall);
            nextcall++;
        }

        if(event==2){
            int x; cin >> x;
            called.erase(x);
        }

        if(event==3){
            ans.push_back(*called.begin());
        }
    }

    for(auto i : ans) cout << i << endl;
}