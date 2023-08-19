#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> h(n, 0);
    for(int i = 0; i < n; i++){
        cin >> h.at(i);
    }

    const int INF = 1001001001;
    vector<int> dp(n,INF);

    dp.at(0) = 0;

    for(int i = 1; i < n; i++){
        dp.at(i) = dp.at(i-1)+abs(h.at(i)-h.at(i-1));
        if(i >= 2)
            dp.at(i) = min(dp.at(i),dp.at(i-2)+abs(h.at(i)-h.at(i-2)));
    }

    cout << dp.at(n-1) << endl;
}