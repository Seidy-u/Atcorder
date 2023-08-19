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
    int n,k;
    cin >> n >> k;
    int digit = 0;
    while(n!=0){
        n /= k;
        digit++;
    }
    cout << digit << endl;
}