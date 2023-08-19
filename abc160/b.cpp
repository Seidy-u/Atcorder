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
    int x;
    cin >> x;
    int ans = 0;
    ans += (x/500)*1000;
    x -= 500*(x/500);
    ans += (x/5)*5;
    cout << ans << endl;
}