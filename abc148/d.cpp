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
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int remain = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int check = 1;
    for(int i = 0; i < n; i++){
        if(a[i]==check){
            check ++;
            remain ++;
        }
    }

    if(remain == 0){
        cout << "-1" << endl;
    }
    else
        cout << n-remain << endl;
}