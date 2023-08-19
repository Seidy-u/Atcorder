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
    vector<int> num;
    int a;
    for(int i=1; i<=(2*n+1); i++){
        num.push_back(i);
    }
    for(int i=0; i<(2*n+1); i++){
        if(i==2*n-1) break;
        cout << num[0] << endl;
        num.erase(num.begin());
        cin >> a;
        for(int j=0; j<num.size(); j++){
            if(num[j]==a){
                num.erase(num.begin()+j);
            }
        }
    }
    num.clear();
    cin >> a;
    return 0;
}