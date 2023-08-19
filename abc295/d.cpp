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
    long long ans = 0;
    int size = s.length();
    vector<vector<string> > num(size, vector<string>(10, "o"));
    for(int i=0; i<size; i++){
        for(int j=0; j<10; j++){
            if(i>0)  num[i][j] = num[i-1][j];
        }
        if(num[i][s[i]-'0']=="x") num[i][s[i]-'0'] = "o";
        else num[i][s[i]-'0'] = "x";
    }

    map<string, long long> sum;
    sum["oooooooooo"]++;
    for(int i=0; i<size; i++){
        string tmp="";
        for(int j=0; j<10; j++){
            tmp += num[i][j];
        }
        ans += sum[tmp];
        sum[tmp]++;
    }

    cout << ans << endl;
}