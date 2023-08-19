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
    double a, b;
    cin >> a >> b;
    double dist = sqrt(a*a + b*b);
    double ans_x = a/dist;
    double ans_y = b/dist;

    printf("%.10f %.10f", ans_x, ans_y);
}