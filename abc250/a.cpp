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
    int h,w,r,c;
    cin >> h >> w >> r >> c;
    int ans = 4;
    if(h == 1) ans --;
    if(w == 1) ans --;

    if(r == 1 || r == h) ans --;
    if(c == 1 || c == w) ans --;
    cout << ans << endl;
}