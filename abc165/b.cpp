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
    long long m,x;
    m = 100;
    cin >> x;
    int ans = 0;
    while(x > m){
        m += m/100;
        ans ++;
    }
    cout << ans << endl;
}