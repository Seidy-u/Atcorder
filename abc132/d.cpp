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

const long long MOD = pow(10, 9) + 7;

long long modpow(long long a, long long b, long long m){
    long long p = a, ret = 1;
    for(int i = 0; i < 30; i++){
        if ((b & (1 << i)) != 0){
            ret *= p;
            ret %= m;
        }
        p *= p;
        p %= m;
    }
    return ret;
}

int main(){
    int n,k;
    cin >> n >> k;

    long long blue = k;
    long long red = n-k;

    vector<long long> factorial;
    factorial.push_back(1);
    for(int i=1; i<=2005; i++){
        long long tmp =(factorial[i-1]*i)%MOD;
        factorial.push_back(tmp);
    }

    for(int i = 1; i <= k; i++){
        if ((i - 1) <= red) {
            long long order_b,order_r;
            if (i == 1) order_b = 1;
            else order_b = (factorial[blue - 1] * modpow((factorial[blue - i] * factorial[i-1]) % MOD, MOD - 2, MOD)) % MOD;
            order_r = (factorial[red+1] * modpow((factorial[red - i + 1] * factorial[i]) % MOD, MOD - 2, MOD)) % MOD;
            
            cout << (order_b * order_r) % MOD << endl;
        }else{
            cout << 0 << endl;
        }
    }
}