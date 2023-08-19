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
    if(n < 126) cout << 4 << endl;
    else if(n < 212) cout << 6 << endl;
    else cout << 8 << endl;
    return 0;
}