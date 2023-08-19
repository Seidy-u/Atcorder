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
    int n,k,q;
    cin >> n >> k >> q;
    int a[k],l;
    for(int i=0;i<k;i++) cin >> a[i];

    for(int i=0;i<q;i++){
        cin >> l;
        l--;
        if(a[l] == n || a[l]+1 == a[l+1]) continue;
        a[l]++;
    }

    for(int i=0;i<k;i++) cout << a[i] << " " ;
    
}