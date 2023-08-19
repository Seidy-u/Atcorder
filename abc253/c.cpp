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
    int q;
    cin >> q;
    multiset<long long> s;
    map<long long, long long> cnt;

    for(int i=0; i<q; i++){
        int query;
        cin >> query;
        if(query == 1){
            int x;
            cin >> x;
            s.insert(x);
            cnt[x]++;
        }
        if(query == 2){
            long long x,c;
            cin >> x >> c;
            long long del = min(c, cnt[x]);
            for(int j=0; j<del; j++){
                s.erase(s.find(x));
            }
            cnt[x] -= del;
        }
        if(query == 3){
            auto min = s.begin();
            auto max = s.end();
            max--;
            cout << *max - *min << endl;
        }
    }
}