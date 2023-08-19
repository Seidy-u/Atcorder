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
    long long a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==0){
            cout << 0 << endl;
            return 0;
        }
    }
    long long ans = 1;
    for(int i = 0; i < n; i++){
        if(1000000000000000000/a[i] < ans){
            ans = -1;
            break;
        }
        ans *= a[i];
    }
    cout << ans << endl;
    return 0;
}