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
    string s;
    cin >> n >> s;
    if(n%2!=0){
        cout << "No" << endl;
        return 0;
    }
    string judge = s;
    int j = 0;
    for(int i=n/2; i<n; i++) judge[i] = s[j++];
    cout << (judge == s ? "Yes" : "No") << endl;
}