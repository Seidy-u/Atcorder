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
    int n,k;
    string s;
    cin >> n >> k >> s;

    s[k-1] = tolower(s[k-1]);
    for(int i = 0; i <n;i++) {
        cout << s[i];
    }
}