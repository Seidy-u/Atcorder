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
    int n;
    cin >> n;
    vector<string> check{"and", "not", "that", "the", "you"};
    
    for(int i=0; i<n; i++){
        string w;
        cin >> w;
        for(int j=0; j<5; j++){
            if(w == check.at(j)){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    
}