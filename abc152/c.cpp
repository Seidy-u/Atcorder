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
    int p[n];
    int ans =0;
    int min = 1001001001;
    for(int i=0; i<n; i++){
        cin >> p[i];
        if(min >= p[i]){
            ans ++;
            min = p[i];
        }
    }

    cout << ans << endl;

}