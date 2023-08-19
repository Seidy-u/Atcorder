#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long H,N,ans=0;
    cin >> H >> N;
    vector<pair<long long, long long> > magic(N);
    vector<pair<float, int> > effective_attack(N);
    for(int i=0;i<N;i++){
        cin >> magic[i].first >> magic[i].second;
    }

    for(int i=0;i<N;i++){
        effective_attack[i].first=((float)magic[i].first/(float)magic[i].second);
        effective_attack[i].second=i;
    }

    for(int i=0;i<N;i++){
        effective_attack[i].second *=-1;
    }
    sort(effective_attack.rbegin(),effective_attack.rend());
    for(int i=0;i<N;i++){
        effective_attack[i].second *=-1;
    }

    // cout << endl;
    // for(int i=0;i<N;i++){
    //     cout << effective_attack[i].first << ' ' << effective_attack[i].second << endl;
    // }
    // cout << endl;
    
    long long last = magic[effective_attack[0].second].second;
    for(int i=0;i<N;i++){
        last=min(last , magic[i].second);
    }

    while(H>0){   
        if((H-last)<0){
            ans+=last;
            cout << ans << endl;
            return 0;
        }
        H-=magic[effective_attack[0].second].first;
        ans += magic[effective_attack[0].second].second;
    }

    cout << ans << endl;
}