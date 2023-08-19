#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int main(){
    long long int N,W,ans=0;
    cin >> N >> W;
    vector<pair<long long int ,long long int> > P(N);

    for(int i=0;i<N;i++){
        cin >> P[i].first >> P[i].second;
    }

    sort(P.rbegin(), P.rend());

    for(int i=0;i<N;i++){
        if(W==0)
            break;
        if(P[i].second==0)
            continue;
        ans+=P[i].first;
        W--;
        P[i].second--;
        i--;
    }

    cout << ans << endl;

}