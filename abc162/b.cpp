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
    cin >> n;
    long long ans = 0;
    for(int i=1; i<=n; i++)
        if(i%3!=0 && i%5!=0) ans += i;

    cout << ans << endl;
}