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
    long long a,b,k;
    cin >> a >> b >> k;
    if(a <= k){
        k -=a;
        a = 0; 
    }
    else{
        cout << a-k << " " << b << endl;
        return 0;
    }
    if(b <= k){
        b = 0;
    }
    else{
        cout << a << " " << b-k << endl;
        return 0;
    }

    cout << a << " " << b << endl;
}