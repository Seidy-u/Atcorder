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
    int k;
    string s;
    cin >> k >> s;
    if(s.length() > k){
        for(int i=0; i<k; i++) cout << s[i];
        cout << "..." << endl;
    }
    else cout << s << endl;
    return 0;
}