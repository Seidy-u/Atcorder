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
    int n;
    cin >> n;
    pair<double, double> p[n];
    int order[n];
    for(int i=0;i<n;i++){
        cin >> p[i].first >> p[i].second;
        order[i] = i;
    }
    double ans = 0;
    do {
        for(int i=0;i<n-1;i++){
            int tmp1 = order[i];
            int tmp2 = order[i+1];
            ans += sqrt((p[tmp1].first-p[tmp2].first)*(p[tmp1].first-p[tmp2].first) + (p[tmp1].second-p[tmp2].second)*(p[tmp1].second-p[tmp2].second));
        }
    } while (next_permutation(order, order+n));

    double tmp=1;
    for(double i=n; i>0; i--) tmp *= i;
    printf("%.10f", ans/tmp);
}