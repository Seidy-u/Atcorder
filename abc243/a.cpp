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
    int v,a,b,c;
    cin >> v >> a >> b >> c;
    char ans;
    int i=0;
    while(v>=0){
        if(i==0){
            v -= a;
            i++;
            if(v<0){
                ans = 'F';
                break;
            }
        }
        if(i==1){
            v -= b;
            i++;
            if(v<0){
                ans = 'M';
                break;
            }
        }
        if(i==2){
            v -= c;
            i = 0;
            if(v<0){
                ans = 'T';
                break;
            }
        }
    }

    cout << ans << endl;
}