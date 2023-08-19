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
    int n,k;
    cin >> n >> k;

    vector<int> a;
    vector<int> sorted_a;
    vector<vector<int> > check(k);
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
        sorted_a.push_back(tmp); 
        check[i%k].push_back(tmp);
    }

    sort(sorted_a.begin(), sorted_a.end());
    for(int i=0;i<k;i++) sort(check[i].begin(), check[i].end());

    for(int i=0;i<n;i++) a[i] = check[i%k][i/k];

    cout << (a == sorted_a ? "Yes" : "No") << endl;

    return 0;
}