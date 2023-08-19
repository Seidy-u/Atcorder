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
    int n,a,b;
    cin >> n >> a >> b;
    char prot[2] = {'.','#'};
    int idx1 = 0;
    int idx2 = 1;
    for(int l = 0; l < n; l++){
        for(int i = 0; i < a; i++){
            for(int j = 0; j < n; j++){
                if(j % 2 ==0){
                    for(int k = 0; k < b; k++){
                        cout << prot[idx1];
                    }
                }
                else{
                    for(int k = 0; k < b; k++){
                        cout << prot[idx2];
                    }
                }
            }
            cout << endl;
        }
        swap(idx1, idx2);
    }
}