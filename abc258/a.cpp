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
    int k;
    cin >> k;
    int HH=21;
    int MM=0;

    MM+=k;
    if(MM >= 60){
        MM -= 60;
        HH++;
    }

    if(MM < 10) cout << HH << ":" << 0 << MM << endl;
    else cout << HH << ":" << MM << endl;
}