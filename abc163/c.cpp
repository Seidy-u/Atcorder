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
    vector<int> a(n, 0);
    for(int i=1; i<n; i++){
        int tmp;
        cin >> tmp;
        a[tmp-1]++;
    }
    for(int i=0; i<n; i++) cout << a[i] << endl;
}