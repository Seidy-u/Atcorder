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
#include <cmath>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    while(1){
        c -= b;
        if(c <= 0){
            cout << "Yes" << endl;
            return 0;
        }
        a -= d;
        if(a <= 0){
            cout << "No" << endl;
            return 0;
        }
    }

}