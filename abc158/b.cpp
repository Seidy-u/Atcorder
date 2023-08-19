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
#include <tuple>
using namespace std;


int main(){
    long long n,a,b;
    cin >> n >> a >> b;
    long long ans = a*((n/(a+b)));
    n = n%(a+b);
    cout << (n>=a ? ans+a : ans+n) << endl;
}