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

int main() {
    string s;
    int k;
    cin >> s >> k;

    sort(s.begin(), s.end());

    int ans = 1;
    do{
        if(ans == k){
            for(int i=0; i<s.length(); i++) cout << s[i];
        }
        ans ++;
    }while(next_permutation(s.begin(), s.end()));
}