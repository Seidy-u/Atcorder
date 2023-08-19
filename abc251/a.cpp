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
    string s;
    cin >> s;

    if(s.length() == 1)
        for(int i=0; i<6; i++) cout << s;

    if(s.length() == 2)
        for(int i=0; i<3; i++) cout << s;

    if(s.length() == 3)
        for(int i=0; i<2; i++) cout << s;
}