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
    string s,t;
    cin >> s >> t;
    for(int i = 0; i<t.length();i++){
        cout << t[i];
    }
    for(int i = 0; i<s.length();i++){
        cout << s[i];
    }
    return 0;
}