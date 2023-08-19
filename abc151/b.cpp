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
#include <cmath>
using namespace std;

int main(){
    int n,k,m;
    cin >> n >> k >> m;
    int a[n], test_sum = 0;
    int n_test, fail = -1;
    for(int i=0; i<n-1; i++){
        cin >> a[i];
        test_sum += a[i];
    }

    n_test = n*m-(test_sum);

    cout << (n_test<=k ? max(n_test,0) : fail) << endl;

}