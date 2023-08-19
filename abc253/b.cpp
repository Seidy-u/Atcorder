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
    string s[h];
    for(int i=0;i<h;i++) cin >> s[i];

    int start_x,start_y,end_x,end_y;
    start_x = -1;
    start_y = -1;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(start_x != -1 && s[i][j] == 'o'){
                end_x = j;
                end_y = i;
            }
            else if(start_x == -1 && s[i][j] == 'o'){
                start_x = j;
                start_y = i;
            }
        }
    }
    cout << abs(start_x - end_x) + abs(start_y - end_y) << endl;
}