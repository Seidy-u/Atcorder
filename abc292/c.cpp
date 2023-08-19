#include <iostream>
#include <string>
#include <cstdlib>
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


// 素因数分解
template <typename T>
map<T, T> prime_factor(T n) {
    map<T, T> ret;
    for (T i = 2; i * i <= n; i++) {
        T tmp = 0;
        while (n % i == 0) {
            tmp++;
            n /= i;
        }
        ret[i] = tmp;
    }
    if (n != 1) ret[n] = 1;
    return ret;
}
/*  divisor_num(n)
    入力：整数 n
    出力：nの約数の個数
    計算量：O(√n)
*/
template <typename T>
T divisor_num(T N) {
    map<T, T> pf = prime_factor(N);
    T ret = 1;
    for (auto p : pf) {
        ret *= (p.second + 1);
    }
    return ret;
}

int main(){
    long long n;
    cin >> n;

    long long ans = 0;

    for(int i=1; i<n; i++){
        long long ab = divisor_num(i);
        // cout << i << "の素因数" << ab << "個" << endl;
        long long cd = divisor_num(n-i);
        // cout << n-i << "の素因数" << cd << "個" << endl;

        ans += (ab * cd);
    }

    cout << ans << endl;
}