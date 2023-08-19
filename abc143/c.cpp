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
    string s;
    cin >> n >> s;
    int ans = 1;
    for(int i=0; i<n-1; i++){
        if(s[i]!=s[i+1]) ans++;
    }
    cout << ans << endl;
}