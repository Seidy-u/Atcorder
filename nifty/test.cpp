#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long h,a,b,ans;
    cin >> h >> a >> b;

    if(h<=a){
        cout << "YES" << endl << '1' << endl;
        return 0;
    }
    
    if(a<=b){
        cout << "NO" << endl;
        return 0;
    }
    
    ans = h/a;
    ans += ((ans*b)+(a-1))/a;

    cout << "YES" << endl << ans << endl;

}