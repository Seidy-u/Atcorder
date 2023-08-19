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
    int r,c;
    cin >> r >> c;

    int a[2][2];
    cin >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1];

    cout << a[r-1][c-1];
}