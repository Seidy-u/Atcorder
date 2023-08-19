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
    string s;
    cin >> s;
    int n = s.length();

    bool flg = true;

    for(int i=0; i<(n/2)+1; i++) 
        if(s[i] != s[n-1-i]) flg = false;
    for(int i=0; i<(n-1)/4; i++)
        if(s[i] != s[((n-1)/2)-1-i]) flg = false;
    for(int i=((n+3)/2)-1; i<n; i++)
        if(s[i] != s[n-1-i]) flg = false;

    cout << (flg ? "Yes" : "No") << endl;
}