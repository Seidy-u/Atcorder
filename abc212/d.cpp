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

    priority_queue<long long, vector<long long>, greater<long long> > bag;

    long long sum = 0;

    for(int i = 0; i < q; i++){
        int query;
        cin >> query;

        if(query == 1){
            long long x;
            cin >> x;
            x -= sum;
            bag.push(x);

        }

        if(query == 2){
            long long x;
            cin >> x;
            sum += x;
        }

        if(query == 3){
            cout << bag.top() + sum << endl;
            bag.pop();
        }

    }
    return 0;
}