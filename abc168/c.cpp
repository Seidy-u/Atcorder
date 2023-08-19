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
    double a,b,h,m;
    cin >> a >> b >> h >> m;
    double deg = abs((h-(m/5))) * 30;
    if(h > (m/5)) deg += m*0.5;
    else deg -= m*0.5;

    double pre_ans = a*a + b*b - 2*a*b*cos(deg*M_PI/180);
    printf("%.10f", sqrt(pre_ans));
    return 0;
}