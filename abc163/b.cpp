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
    long long n,m;
    cin >> n >> m;
    long long a[m],sum=0;
    for(int i=0;i<m;i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << ((n-sum) >= 0 ? (n-sum) : -1LL) << endl;
}