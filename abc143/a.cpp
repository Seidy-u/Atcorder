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
    int a,b;
    cin >> a >>b;
    int ok = 0; 
    cout << (a-b*2 >= 0 ? a-b*2:ok) << endl;
}