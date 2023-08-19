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
    int n,m;
    cin >> n >> m;
    int a[n];
    double sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    int cnt = 0;
    double judge = sum/(4*m);
    for(int i=0;i<n;i++){
        if(a[i]>=judge) cnt++;
    }

    cout << (cnt >= m ? "Yes" : "No") << endl;
}