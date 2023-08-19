#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string S;
    cin >> S;
    int countW = 0;
    int ans = 0;
    for(int i=0;i<S.length();i++){
        if(S[i]=='W'){
            ans += (i-countW);
            countW ++;
        }
    }
    cout << ans ;
}