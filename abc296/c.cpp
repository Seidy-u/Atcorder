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
    int n,x;
    cin >> n >> x;
    int a[n];
    set<int> num;
    for(int i=0; i<n; i++){
        cin >> a[i];
        num.insert(a[i]);
    }

    bool ans = false;
    for(int i=0; i<n; i++){
        if(num.count(a[i]+x)) ans = true;
    }
    cout << (ans ? "Yes" : "No") << endl;
}