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
    long long a,b,k;
    cin >> a >> b >> k;
    long long ans = 0;
    while(a<b){
        a *= k;
        ans ++;
    }
    cout << ans << endl;
}