#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int N, K;
    cin >> N >> K;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S.at(i);
    }
    
    long long ans = 0;
    long long count = 0;
    // すべての選び方を試して、総和がKになるものがあるかを調べる
    for (int tmp = 0; tmp < (1 << 15); tmp++) {
        bitset<N> s(tmp);  // 最大20個なので20ビットのビット列として扱う
    
        // ビット列の1のビットに対応する整数を選んだとみなして総和を求める
        map<char, int> cnt;
        for (int i = 0; i < N; i++) {
            if(s.test(i)){
                    for(int j=0; j<S[i].size(); j++){
                        cnt[S[i].at(j)]++;
                    }
            }
        }
        count = 0;
        for (auto iter = cnt.begin(); iter != cnt.end(); ++iter){
            
            if(iter->second == K) count ++;
        }
        ans = max(ans, count);
    }
    
    cout << ans << endl;
}