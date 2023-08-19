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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt_t = 0;
    int cnt_a = 0;

    for(int i=0; i<n; i++){
        if(s[i] == 'T') cnt_t++;
        else cnt_a++;
    }

    if(cnt_t != cnt_a){
        cout << (cnt_t > cnt_a ? 'T' : 'A') << endl;
    }
    else{
        cout << (s[n-1] == 'T' ? 'A' : 'T') << endl;
    }

    return 0;
}