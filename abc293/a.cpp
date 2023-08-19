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
    int l = s.length();

    for(int i=1; i<l; i++){
        swap(s[i-1], s[i]);
        i++;
    }

    cout << s << endl;
}