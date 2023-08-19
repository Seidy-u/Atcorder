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
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ans[n];
    for(int i = 0; i < n; i++){
        ans[a[i]-1] = i+1;
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
}