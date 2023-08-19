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
    string x;
    cin >> x;
    bool flg = true;
    if(x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) flg = false;

    int cnt = 0;
    for(int i = 0; i < x.size() - 1; i++){
        if((((x[i] - '0')+1) % 10) == (x[i+1] - '0')) cnt++;
    }

    cout << (!flg || cnt == 3 ? "Weak" : "Strong") << endl;
    return 0;
}