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
    vector<int> num(10,0);
    for(int i=0; i<10; i++){
        num[(s[i]-'0')] ++;
    }
    for(int i=0; i<10; i++){
        if(num[i] == 0) cout << i << endl;
    }

}