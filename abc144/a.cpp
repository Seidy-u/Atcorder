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
    int a,b;
    cin >> a >> b;
    int err = -1;
    cout << ((a<10 && b<10) ? a*b : err) << endl;
}