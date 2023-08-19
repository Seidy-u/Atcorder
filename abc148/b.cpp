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
    int n;
    string s,t;
    cin >> n;
    cin >> s >> t;
    for(int i = 0; i < n; i++){
        cout << s[i] << t[i];
    }
    cout << endl;
}