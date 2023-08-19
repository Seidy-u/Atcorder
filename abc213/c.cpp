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
    long long h,w,n;
    cin >> h >> w >> n;

    long long a[n],b[n];
    for(int i=0;i<n;i++) cin >> a[i] >> b[i];

    pair<long long, long long> ab[n];
    for(int i=0;i<n;i++) ab[i] = make_pair(a[i],b[i]);

    map<long long, long long> order_a;
    map<long long, long long> order_b;

    sort(a, a+n);
    sort(b, b+n);

    int rank_a = 1;
    int rank_b = 1;
    for(int i=0;i<n;i++){
        if(order_a[a[i]] == 0) order_a[a[i]] = rank_a++;
        if(order_b[b[i]] == 0) order_b[b[i]] = rank_b++;
    }

    for(int i=0;i<n;i++){
        cout << order_a[ab[i].first] << " ";
        cout << order_b[ab[i].second] << endl;
    }

    return 0;
}