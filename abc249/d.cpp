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
    long long a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);
    reverse(a, a+n);
    long long ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = j; k < n; k++){
                if()
            }
        }
    }
}