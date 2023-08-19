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
    float a,b,c,x;
    float ans =0;
    cin >> a >> b >> c >> x;

    if(x<=a){
        cout << "1.0000000" << endl;
        return 0;
    }

    if(a+1 <= x && x <=b){
        ans = c/(b-a);
        printf("%.6f", ans);
        return 0;
    }
    else{
        cout << "0.0000000" << endl;
        return 0;
    }

}