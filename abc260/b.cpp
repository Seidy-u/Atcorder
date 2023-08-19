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
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    vector<int> a(n),b(n),sum(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    for(int i=0;i<n;i++) sum[i] = a[i]+b[i];

    vector<int> pass(1000,0);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

        }
    }

    return 0;
}