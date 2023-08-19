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
    int  n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2==0){
            if(a[i]%3!=0 && a[i]%5!=0){
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }

    cout << "APPROVED" << endl;
}