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

// int main(){
//     int n,k,x;
//     cin >> n >> k >> x;
//     priority_queue<int> a;
//     for(int i = 0; i < n; i++){
//         int tmp;
//         cin >> tmp;
//         a.push(tmp);
//     }

//     for(int i = 0; i<k; i++){
//         int tmp = a.top();
//         a.pop();
//         if((tmp-x)>=0) a.push(tmp-x);
//         else a.push(0);
//     }

//     long long ans = 0;
//     while(!a.empty()){
//         ans += a.top();
//         a.pop();
//     }

//     cout << ans << endl;
// }

int main(){
    int n,k,x;
    cin >> n >> k >> x;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=0; i< n; i++){
        int cut = min(a[i]/x, k);
        a[i] = a[i] - (cut*x);
        k -= cut; 
    }

    sort(a, a+n);
    reverse(a, a+n);
    long long ans = 0;
    if(k<n){
        for(int i=k; i<n; i++){
            ans += a[i];
        }
    }

    cout << ans << endl;
}