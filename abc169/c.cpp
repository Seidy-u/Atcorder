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
    long long a,b1,b2;
    scanf("%lld %lld.%lld", &a, &b1, &b2);

    long long ans = a * (b1 * 100 + b2) / 100;
    cout << ans << endl;
    return 0;
}