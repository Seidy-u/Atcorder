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
    int r,c;
    cin >> r >> c;
    string b[r];
    for(int i=0; i<r; i++) cin >> b[i];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if((b[i][j] != '.') && (b[i][j] != '#')){
                int bomb = b[i][j] - '0';
                b[i][j] = '.';
                for(int k=0; k<r; k++){
                    for(int l=0; l<c; l++){
                        int dist = abs(i-k)+abs(j-l);
                        if(dist <= bomb && b[k][l] == '#') b[k][l] = '.';
                    }
                }
            }
        }
    }
    for(int i=0; i<r; i++){
        cout << b[i] << endl;
    }
}