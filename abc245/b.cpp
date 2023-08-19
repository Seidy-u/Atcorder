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
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < 2002; i++){
        bool flg = true;
        for(int j = 0; j < n; j++){
            if(i == a[j]) flg = false;
        }
        if(flg){
            cout << i << endl;
            return 0;
        }
    }
}