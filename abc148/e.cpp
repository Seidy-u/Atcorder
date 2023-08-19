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
    long long n;
    cin >> n;
    long long ans = 0;
    if(n%2==1){
        cout << "0" << endl;
        return 0;
    }

    long long check =10;
    while(n/check >0){
        ans += n/check;
        check *= 5;
    }

    cout << ans << endl;
}