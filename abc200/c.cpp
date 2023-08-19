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
#define int long long
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> mod(200, 0);
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        mod[a%200]++;
    }

    long long ans = 0;
    for(long long i : mod){
        long long comb = (i * (i - 1)) / 2;
        ans += comb;
    }

    cout << ans << endl;
    return 0;
}