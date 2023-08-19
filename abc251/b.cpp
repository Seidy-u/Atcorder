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
    int n,w;
    cin >> n >> w;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    
    set<int> ans;

    for(int i=0; i<n;i++)
        if(a[i] <= w) ans.insert(a[i]);


    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((a[i] + a[j]) <= w) ans.insert(a[i]+a[j]);
        }
    }

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if((a[i] + a[j] + a[k]) <= w) ans.insert(a[i] + a[j] + a[k]);
            }
        }
    }

    cout << ans.size() << endl;
}