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
    int a,b;
    cin >> a >> b;
    for(int i=0; i<max(a, b); i++){
        cout << min(a, b);
    }
}