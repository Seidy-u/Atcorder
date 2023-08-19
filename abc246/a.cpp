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
    int x[3], y[3];
    int ans_x, ans_y;
    for(int i=0; i<3; i++){
        cin >> x[i] >> y[i];
    }
    
    if(x[0] == x[1]) ans_x = x[2]; 
    else if(x[0] == x[2]) ans_x = x[1];
    else ans_x = x[0];

    if(y[0] == y[1]) ans_y = y[2]; 
    else if(y[0] == y[2]) ans_y = y[1];
    else ans_y = y[0];

    cout << ans_x << " " << ans_y << endl;
}