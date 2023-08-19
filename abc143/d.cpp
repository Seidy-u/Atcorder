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
    int l[n];
    for(int i=0; i<n; i++) cin >> l[i];
    int ans = 0;
    sort(l, l+n);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(l[k]<l[i]+l[j]) ans++;
            }
        }
    }
    cout << ans << endl;
}