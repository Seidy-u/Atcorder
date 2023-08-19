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
    int k,a,b;
    cin >> k >> a >> b;
    for(int i=a;i<=b;i++){
        if(i % k == 0){
            cout << "OK" << endl;
            return 0;
        }
    }
    cout << "NG" << endl;
}