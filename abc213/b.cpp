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
    int a[n];
    int check[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        check[i] = a[i];
    }

    sort(check, check+n);
    int tmp = check[n-2];

    for(int i=0; i<n; i++)
        if(a[i] == tmp) cout << i+1 << endl;

    return 0;
}