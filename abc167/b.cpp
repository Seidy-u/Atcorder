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
    int a,b,c,k;
    cin >> a >> b >> c >> k;

    int ans = 0;

    if(k > a){
        ans += a;
        k -= a;
    }
    else{
        cout << k << endl;
        return 0;
    }

    if(k > b){
        k -= b;
    }
    else{
        cout << ans << endl;
        return 0;
    }

    cout << ans - k << endl;
}