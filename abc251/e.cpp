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
    long long n;
    cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    //A1
    long long ans1 = a[0];
    for(int i = 1; i < n-1; i++){
        if(a[i] >= a[i+1]){
            ans1 += a[i+1];
            i++;
        }
        else{
            ans1 += a[i];
        }
    }

    //An
    long long ans2 = a[n-1];
    for(int i = 0; i < n-2; i++){
        if(a[i] >= a[i+1]){
            ans2 += a[i+1];
            i++;
        }
        else{
            ans2 += a[i];
        }
    }

    cout << min(ans1, ans2) << endl;

    return 0;
}