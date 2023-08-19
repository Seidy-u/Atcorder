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
    cout << (s[2] == s[3] && s[4] == s[5] ? "Yes" : "No");
}