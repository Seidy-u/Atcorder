#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int H,A,ans=0;
    cin >> H >> A;
    while(H>0){
        H-=A;
        ans++;
    }

    cout << ans << endl;
}