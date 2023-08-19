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
    string s[n];
    s[0] = '1';
    for(int i=1; i<n; i++){
        s[i] = s[i-1];
        s[i] += ' ';
        s[i] += to_string(i+1);
        s[i] += ' ';
        s[i] += s[i-1];
    }

    cout << s[n-1] << endl;
}