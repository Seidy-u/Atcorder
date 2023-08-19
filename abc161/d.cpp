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
    long long k;
    cin >> k;
    flg = false;
    while(!flg){
        to_string(k);
        flg = true;
        for(int i=0; i<k.length()-1; i++){
            if(abs((k[i]-'0')-(k[i+1]-'0'))>1) flg = false;
        }
        stoll(k);
        k++;
    }
    cout << k << endl;
}