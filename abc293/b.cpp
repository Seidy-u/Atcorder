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
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    vector<bool> check(n,false);
    for(int i=0; i<n; i++){
        if(check[i] == true) continue;
        if(check[i] == false) check[a[i]-1] = true;
    }

    vector<int> ans;
    for(int i=0; i<n; i++){
        if(check[i] ==false) ans.push_back(i+1);
    }

    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
}