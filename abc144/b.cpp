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
    cin >> n;
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            if(i*j==n){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}