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
    int n,k;
    cin >> n >> k;

    int a[k],x[n],y[n];
    for(int i=0;i<k;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];

    vector<double> point(n, 1001001001);

    double dist = 0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            double dist = sqrt(pow(abs(x[a[j]-1]-x[i]),2) + pow(abs(y[a[j]-1]-y[i]),2));
            point[i] = min(dist, point[i]);
        }
    }

    double ans = point[0];

    for(int i=1; i<=n; i++) ans = max(ans, point[i]);

    printf("%.10f", ans);
}