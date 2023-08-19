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
using namespace std;

int main(){
    string s;
    cin >> s;
    int start = 0;
    int end = s.length()-1;
    int ans = 0;
    while (start < end){
        if(s[start++]!=s[end--]){
            ans ++;
        }
    }
    cout << ans << endl;
}