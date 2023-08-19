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
    string week[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    string s;
    cin >> s;
    for(int i=0; i<7; i++){
        if(week[i]==s){
            cout << 7-i << endl;
        }
    }
}