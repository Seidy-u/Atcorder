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


int main(){
    long long n;
    cin >> n;
    long long q;
    cin >> q;
    string s;
    cin >> s;

    long long start= LONG_MAX;
    while(start % s.length() != 0) start --;
    for(int i=0; i<q; i++){
        int t; cin >> t;
        int x; cin >> x;
        if(t == 1){
            start -= x;
        }

        if(t == 2){
            cout << s[(start+x-1) % s.length()] << endl;
        }
    }
}