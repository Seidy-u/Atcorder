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
    double n,k;
    cin >> n >> k;

    double ans = max(0.0, (n-k+1)/n);
    for(double i=1; i<min(n+1, k); i++){
        double cnt = (1 / n);
        int tmp = i;
        while(tmp < k){
            tmp *= 2.0;
            cnt *= (1.0/2.0);
        }
        ans = ans + cnt;
    }

    printf("%.10f", ans);
}