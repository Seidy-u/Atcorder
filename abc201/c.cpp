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
    string s;
    cin >> s;

    int ans = 0;
    for(int i=0; i<10000; i++){

        vector<bool> check(10, false);

        int tmp = i;
        for(int j=0; j<4; j++){
            check[tmp%10] = true;
            tmp /= 10;
        }

        bool flg = true;
        for(int j=0; j<10; j++){
            if(check[j] == true && s[j] == 'x') flg = false;
            if(check[j] == false && s[j] == 'o') flg = false;
        }

        if(flg) ans++;
    }
    
    cout << ans << endl;
    return 0;

}