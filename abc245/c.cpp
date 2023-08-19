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
    int a[n],b[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    vector<bool> dp1(n, false), dp2(n, false); 
    dp1[0]=dp2[0]=true;
    for(int i=1;i<n;i++){
        if(dp1[i-1]){
            if(abs(a[i]-a[i-1])<=k) dp1[i] = true;
            if(abs(b[i]-a[i-1])<=k) dp2[i] = true;
        }
        if(dp2[i-1]){
            if(abs(a[i]-b[i-1])<=k) dp1[i] = true;
            if(abs(b[i]-b[i-1])<=k) dp2[i] = true;
        }
    }

    if(dp1[n-1] || dp2[n-1]) cout << "Yes" << endl;
    else cout << "No" << endl;
}