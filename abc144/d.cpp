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
    double a,b,x,ans;
    cin >> a >> b >> x;
    double v = a*a*b;
    if(v/2 < x){
        ans = atan2((2*(v-x)), (a*a*a));
    }
    else{
        ans = atan2((a*b*b), (2*x));
    }
    ans = ans * 180 / 3.1415926535;
    printf("%.10f", ans);
}