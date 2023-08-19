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
    int n;
    string t;
    cin >> n >> t;
    int x=0,y=0;
    int now = 0;
    for(int i=0;i<n;i++){
        if(t[i]=='S' && now%4==0){
            x++;
        }
        if(t[i]=='S' && now%4==1){
            y--;
        }
        if(t[i]=='S' && now%4==2){
            x--;
        }
        if(t[i]=='S' && now%4==3){
            y++;
        }
        if(t[i]=='R'){
            now++;
        }
    }
    cout << x << " " << y << endl;
}