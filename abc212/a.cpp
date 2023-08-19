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
    int a,b;
    cin >> a >> b;

    if(a == 0) cout << "Silver" << endl;
    else if(b == 0) cout << "Gold" << endl;
    else cout << "Alloy" << endl;

    return 0;
}