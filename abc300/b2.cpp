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
    char a[h][w];
    char b[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> b[i][j];
        }
    }

    string ans = "No";

    for(int s=0; s<h; s++){
        for(int t=0; t<w; t++){
            bool flg = true;
            for(int i=0; i<h; i++){
                for(int j=0; j<w; j++){
                    int x = (i+s)%h;
                    int y = (j+t)%w;
                    if(a[x][y] != b[i][j]) flg = false;
                }
            }
            if(flg) ans = "Yes" ;
        }
    }


    cout << ans << endl;
    return 0;
}