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
    int a,b,c;
    cin >> a >> b >> c;
    if(a >= b && b >= c) cout << "Yes" << endl;
    else if(c >= b && b >= a) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}