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
    int point[n];
    for(int i=0; i<n; i++) point[i] = k;
    for(int i=0; i<q; i++){
        int a;
        cin >> a;
        point[a-1]++;
    }
    for(int i=0; i<n; i++){
        if((point[i]-q)>0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}