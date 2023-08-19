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
    long long cnt[n+1];
    for(int i=0; i<n; i++){
        cin >> a[i];
        cnt[i] = 0;
    }
    cnt[n] = 0;
    for(int i=0; i<n; i++){
        cnt[a[i]]++;
    }

    long long sum = 0;
    for(int i=0; i<n+1; i++) sum += ((cnt[i])*(cnt[i]-1))/2;

    for(int i=0; i<n; i++){
        long long ans = sum;
        ans -= ((cnt[a[i]])*(cnt[a[i]]-1))/2;
        ans += ((cnt[a[i]]-1)*(cnt[a[i]]-2))/2;
        cout << ans << endl;
    }
}