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
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> s;
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    cout << s.size() << endl;
}