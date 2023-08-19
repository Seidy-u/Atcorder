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
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    vector<pair<int ,char> > ab;
    for(int i=0;i<n;i++){
        cin >> a[i];
        ab.push_back({a[i], 'a'});
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
        ab.push_back({b[i], 'b'});
    }

    sort(ab.begin(), ab.end());

    vector<int> ans1;
    vector<int> ans2;
    for(int i=0;i<n+m;i++){
        if(ab[i].second == 'a') ans1.push_back(i+1);
        else ans2.push_back(i+1);
    }

    for(int i=0; i<n; i++){
        cout << ans1[i] << " ";
    }
    cout << endl;

    for(int i=0; i<m; i++){
        cout << ans2[i] << " ";
    }

}