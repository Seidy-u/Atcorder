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
#include <tuple>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << (((s[0] == s[1]) && (s[1] == s[2])) ? "No" : "Yes") << endl;
}