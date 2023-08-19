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
    int n;
    cin >> n;

    vector<vector<int> > a(100, vector<int>(100, 0));
    for(int i = 0; i < n; i++){
        a[i][0] = 1;
        cout << a[i][0] << ' ';
        for(int j = 1; j < i+1; j++){
            a[i][j] = a[i-1][j] + a[i-1][j-1];
            cout << a[i][j] << ' ';
        }
        cout << end;l
    }
    
    return 0;
}