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
    vector<int> ans;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0) ans.push_back(a[i]);
    }

    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    
}