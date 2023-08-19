#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <bitset>
using namespace std;


int main(){
    long long K;
    cin >> K;
    string ans = "";
    while(K>0)
    {
        ans += (to_string(K%2));
        K/=2;
    }

    for(long long i=0;i<ans.length();i++){
        if(ans[i]=='1')
            ans[i]='2';
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;
    
}