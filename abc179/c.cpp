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
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans = 0;
    for(int i = 1; i < n; i++) ans += (n-1)/i;
    cout << ans << endl;
}