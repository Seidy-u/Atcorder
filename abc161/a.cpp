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
    int x,y,z;
    cin >> x >> y >> z;
    swap(x,y);
    swap(x,z);
    cout << x << " " << y << " " << z << endl;
}