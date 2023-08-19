#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long t,ans1=0,ans2=0,ans=0;
    cin >> t;
    ans1 = t*t+2*t+3;
    ans1 +=t;
    ans1 = ans1*ans1+2*ans1+3;
    ans2 = t*t+2*t+3;
    ans2 = ans2*ans2+2*ans2+3;
    ans = ans1+ans2;
    ans = ans*ans+2*ans+3;
    cout << ans << endl;
}