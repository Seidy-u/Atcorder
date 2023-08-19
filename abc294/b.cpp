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
    int h,w;
    cin >> h >> w;
    int a[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> a[i][j];
        }
    }

    string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ans[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(a[i][j]==0) ans[i][j] = '.';
            else ans[i][j] = alph[a[i][j]-1];
        }
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout << ans[i][j];
        }
        cout << endl;
    }

}