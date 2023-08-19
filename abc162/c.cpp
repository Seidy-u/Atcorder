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
    int k;
    cin >> k;
    int ans=0;
    for(int a=1;a<=k;a++){
        for(int b=1;b<=k;b++){
            for(int c=1;c<=k;c++){
                int tmp = __gcd(a,b);
                ans += __gcd(tmp,c);
            }
        }
    }
    cout << ans << endl;
}