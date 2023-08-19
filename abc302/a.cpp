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
    long long a, b;
    cin >> a >> b;

    if(a % b == 0) cout << a/b << endl;
    else cout << a/b + 1 << endl; 

    return 0;
}