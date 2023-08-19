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
    int n;
    cin >> n;
    set<long long> a;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }

    if(a.size()==n)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

}