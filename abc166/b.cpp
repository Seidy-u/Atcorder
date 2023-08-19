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
using namespace std;

int main(){
    int n,k,d;
    cin >> n >> k;

    set<int> treat;
    for(int i=0; i<k; i++){
        cin >> d;
        for(int j=0; j<d; j++){
            int tmp;
            cin >> tmp;
            treat.insert(tmp);
        }
    }
    cout << n - treat.size() << endl;

}