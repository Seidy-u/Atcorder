#include <iostream>
#include <string>
#include <cstdlib>
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
    for(int i=0; i<s.size(); i++) s[i] = toupper(s[i]);
    cout << s << endl;
}