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
    vector<int> a(n);
    
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> ans;

    ans.push_back(a[0]);
    for(int i=1; i<n; i++){
        if(a[i-1] > a[i]){
            for(int j=(a[i-1]-1); j>a[i]; j--) ans.push_back(j);
        }
        else{
            for(int j=(a[i-1]+1); j<a[i]; j++) ans.push_back(j);
        }
        ans.push_back(a[i]);
    }

    for(int i=0; i<ans.size(); i++) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}