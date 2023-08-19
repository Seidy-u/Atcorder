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
    bool flg = true;
    for(int i = 0; i < s.length(); i++){
        if(i%2 == 0){
            if(s[i] == 'L') flg = false;
        }
        if(i%2 == 1){
            if(s[i] == 'R') flg = false;
        }
    }

    cout << (flg ?  "Yes" : "No") << endl;
}