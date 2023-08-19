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
    int n,x;
    cin >> n >> x;

    vector<char> moji;
    char now = 'A';
    for(int i=0; i<26; i++){
        for(int j=0; j<n; j++){
            moji.push_back(now);
        }
        now++;
    } 

    cout << moji[x-1] << endl;
}