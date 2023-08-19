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
    int n,a,b;
    cin >> n >> a >> b;
    int c[n];
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin >> c[i];
        if(c[i]==(a+b)) ans.push_back(i+1);
    }
    for(int i=0;i<ans.size(); i++) cout << ans[i] << ' ';
    
    return 0;
}