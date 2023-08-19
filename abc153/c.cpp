#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long N,K,ans=0;
    cin >> N >> K;
    vector <long long> H(N);
    for(int i=0;i<N;i++){
        cin >> H[i];
    }

    sort(H.begin(), H.end());
    
    for (long long i = 0; i < N - K; i ++ ){
        ans += H[i];
    }

    cout << ans;
}