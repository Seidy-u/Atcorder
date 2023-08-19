#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string ans = "";
    while(n>0){
        if((n)%2==0) ans += 'B', n /= 2;
        else ans += 'A', n--;
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}