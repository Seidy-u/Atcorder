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
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    double p[n];
    for(int i=0; i<n; i++) cin >> p[i];

    double S[n+1];
    S[0] = 0;
    for(int i=1; i<=n; i++) S[i] = S[i-1]+p[i-1];

    double max = 0;
    int idx = 0;
    for(int i=k; i<=n; i++){
        if(max <= S[i]-S[i-k]){
            max = S[i]-S[i-k];
            idx = i-1;
        }
    }

    double ans = 0;
    for(int i=0; i<k; i++) ans += (1+p[idx-i])/2;
    printf("%.10f", ans);
}