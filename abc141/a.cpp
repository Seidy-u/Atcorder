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
    string weather[3] = {"Sunny", "Cloudy", "Rainy"};
    string s;
    cin >> s;
    int i;
    for(i = 0; i < 3; i++){
        if(s == weather[i]) break;
    }
    cout << (i == 2 ? weather[0] : weather[i+1]) << endl;
}