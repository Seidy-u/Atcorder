#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string S;
    cin >> S;
    int ans;
    ans = (S[0]-'0') * (S[2]-'0');
    cout << ans;
}