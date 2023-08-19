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
    long long n;
    cin >> n;
    long long ans = LLONG_MAX;
    for(long long i=1; i*i<=n; i++){
        long long a,b;
        if(n%i==0){
            a = i;
            b = n/i;
            ans = min(ans, a+b);
        }
    }
    cout << ans-2 << endl;
}