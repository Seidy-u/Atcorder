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
    int a,b,ans=-1;
    cin >> a >> b;
    for(int i =0; i<1251; i++){
        if(((i*8/100) == a) && ((i*10/100) == b)){ 
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}