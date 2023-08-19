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
    long long h[n];
    for(int i=0; i<n; i++) cin >> h[i];

    long long tall = -1;
    long long ans;

    for(int i=0; i<n; i++)tall = max(tall, h[i]);

    for(int i=0; i<n; i++){
        if(h[i] == tall){
            ans = i+1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}