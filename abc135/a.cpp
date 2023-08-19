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
    int a,b;
    cin >> a >> b;
    int k; 
    for(k=0; k<1000000001; k++){
        if(abs(a-k)==abs(b-k)) break;
    }
    if(k == 1000000001) cout << "IMPOSSIBLE" << endl;
    else cout << k << endl;
}