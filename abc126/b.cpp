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
    string ans;
    int check1 = (s[0]-'0')*10 + (s[1]-'0');
    int check2 = (s[2]-'0')*10 + (s[3]-'0');
    if(0 < check1 && check1 < 13){
        if(0 < check2 && check2 < 13) ans = "AMBIGUOUS";
        else ans = "MMYY";
    }
    else if(0 < check2 && check2 < 13) ans = "YYMM";
    else ans = "NA";

    cout << ans << endl;
}