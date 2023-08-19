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
#include <tuple>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    int ans = 1001001001;
    for(int p = 1; p < 101; p++){
        int sum = 0;
        for(int i = 0; i < n; i++) sum += pow((x[i]-p), 2);
        ans = min(ans, sum);
    }

    cout << ans << endl;
}