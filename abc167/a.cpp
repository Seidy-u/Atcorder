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
    string s,t;
    cin >> s >> t;
    if(s.size() == t.size()-1){
        if(s + t[t.size()-1] == t){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}