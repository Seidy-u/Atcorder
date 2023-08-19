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
#include <math.h>
#include <climits>
using namespace std;


long long bin_to_dec(string s){
    long long decimal = 0;
    long long base = 1;

    for(int i = s.length()-1; i>=0; i--){
        if(s[i] == '1') decimal += base;
        base*=2;
    }

    return decimal;
}


int main(){
    string s;
    cin >> s;
    long long n;
    cin >> n;
    

    if(bin_to_dec(s)>n){
        cout << -1 << endl;
        return 0;
    }

    for(int i=0; i<s.length(); i++){
        string tmp = s;
        if(s[i] == '?'){
            tmp[i] = '1';

            if(bin_to_dec(tmp) <= n) s = tmp;
        }
    }

    cout << bin_to_dec(s) << endl;
}