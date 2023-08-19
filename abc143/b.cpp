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
    int d[n];
    for(int i=0; i<n; i++){
        cin >> d[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            ans += d[i]*d[j];
        }
    }
    cout << ans << endl;
}