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
    set<char> check;
    bool flg_up = false;
    bool flg_low = false;
    bool flg_diff = false;
    for(int i = 0; i < s.length(); i++){
         if(isupper(s[i])) flg_up = true;
         if(islower(s[i])) flg_low = true;
         check.insert(s[i]);
    }
    if(check.size() == s.length()) flg_diff = true;

    cout << (flg_up && flg_low && flg_diff ? "Yes" : "No") << endl;
}