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
    int n,k;
    cin >> n >> k;
    int a[n],b[k];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<k;i++) cin >> b[i];

    bool mazui = false;

    int eat = 0;
    for(int i=0;i<n;i++) eat = max(eat, a[i]);

    for(int i=0;i<k;i++)
        if(a[b[i]-1] == eat) mazui = true;

    cout << (mazui ? "Yes" : "No") << endl;
}