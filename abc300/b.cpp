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

    bool flg = true;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(a[i][j] != b[i][j]) flg = false;
        }
    }

    if(flg){
        cout << "Yes" << endl;
        return 0;
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<h; j++){
            
            swap(a[0][j], a[h-1][j]);
        }

        for(int k=0; k<h; k++){
            for(int l=0; l<w; l++){
                if(a[k][l] != b[k][l]) flg = false;
            }
        }

        if(flg){
            cout << "Yes" << endl;
            return 0;
        }

        for(int m=0; m<w+1; m++){
            for(int n=0; n<h; n++){
                swap(a[n][0], a[n][w-1]);
            }
            for(int k=0; k<h; k++){
                for(int l=0; l<w; l++){
                    if(a[k][l] != b[k][l]) flg = false;
                }
            }
            if(flg){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}