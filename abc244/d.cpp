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
using namespace std;

int main(){
    char s[3],t[3];
    for(int i=0;i<3;i++){
        cin >> s[i];
    }
    for(int i=0;i<3;i++){
        cin >> t[i];
    }
    int dif = 0;
    for(int i=0;i<3;i++){
        if(s[i]!=t[i]) dif++;
    }
    cout << (dif==2 ? "No" : "Yes") << endl;
}