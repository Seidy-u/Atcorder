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
    cin >> a >> b;
    // for(int i=0;i<=256; i++)
    //     if((a^i) == b) cout << i << endl;

    cout << (a^b) << endl;

    return 0;
}