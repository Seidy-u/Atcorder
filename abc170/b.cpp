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
    int x,y;
    cin >> x >> y;

    bool flg = false;
    for(int i = 0; i <= x; i++){
        if(i * 2 + (x - i) * 4 == y) flg = true;
    }

    cout << (flg ? "Yes" : "No") << endl;
    return 0;
}