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

int main() {
    int n;
    cin >> n;

    long long ans = 0;
    for(int i = 1; i <= n; i++){
        int tmp = i;
        for(int j=2; j*j<=n; j++){
            while(tmp % (j*j) == 0){
                tmp = tmp / (j*j);
            }
        }
        for(int k=1; tmp*k*k<=n; k++){
            ans ++;
        }
    }

    cout << ans << endl;
}