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
    string s[8];
    string alph = "hgfedcba";
    for(int i=0; i<8; i++) cin >> s[i];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(s[i][j] == '*'){cout << alph[7-j] << 8-i << endl;
            return 0;
            }
        }
    }
}