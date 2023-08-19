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
    int n;
    double ans;
    cin >> n;
    if(n == 1) ans = 1.00000000;
    if(n%2 == 0) ans =0.5000000;
    else ans = ceil((double)n/2)/(double)n;
    printf("%.10f", ans);
}