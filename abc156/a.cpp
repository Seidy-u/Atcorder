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
#include <tuple>
using namespace std;

int main(){
    int n,r;
    cin >> n >> r;
    cout << (n<10 ? r+(100*(10-n)) : r) << endl;
}