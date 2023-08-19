#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long H,ans=2;
    cin >> H;

    while(H>1){
        H=H/2;
        ans=ans*2;
    }
    cout << ans-1 << endl;
}