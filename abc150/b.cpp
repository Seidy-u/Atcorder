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
    int n;
    string s;
    cin  >> n >> s;
    int ans = 0;
    for(int i = 0; i < n-2; i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')
            ans ++;
    }

    cout << ans << endl;
}