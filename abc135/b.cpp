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
    int n;
    cin >> n;
    int p[n], diff = 0;
    for(int i=1; i<=n; i++){
        cin >> p[i];
        if(p[i]!=i) diff++;
    }
    cout << (diff == 2 || diff == 0 ? "YES" : "NO") << endl;
}