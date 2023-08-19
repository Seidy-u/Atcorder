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
    int a[n];
    vector <vector <int> > num(n+1, vector<int>(1000001, 0));
    map <int, int> num_sum;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        num_sum[a[i]]++;
        num[i+1][a[i]] = num_sum[a[i]]; 
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int l,r,x;
        cin >> l >> r >> x;
        cout << num[r][x] - num[l][x] << endl;
    }
}