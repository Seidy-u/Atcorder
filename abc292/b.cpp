#include <iostream>
#include <string>
#include <cstdlib>
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
    int n, q;
    cin >> n >> q;
    vector<int> player(n+1, 0);

    for(int i=0; i<q; i++){
        int event, x; 
        cin >> event >> x;

        if(event == 1) player[x]++;
        if(event == 2) player[x]+=2;
        if(event == 3){
            if(player[x] > 1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}