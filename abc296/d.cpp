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

int main() {
    long long n,m;
    cin >> n >> m;
    long long ans = 1LL<<60;
    long long a, b;
    for(long long i=1; i*i<=1001001001001; i++){
        a = i;
        b = (m%a == 0 ? m/a : (m/a)+1);
        if((a > n) || (b > n)) continue;
        else if((a*b) >= m) ans = min(ans, a*b);
    }

    cout << (ans == 1LL<<60 ? -1 : ans) << endl;
}