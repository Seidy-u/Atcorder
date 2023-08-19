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
    int a[m],c[m];
    char b[m],d[m];
    for(int i=0; i<m; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    map<int, int> pre_circle;
    for(int i=1; i<=n; i++){
        pre_circle[i*10] = i*10+1;
        pre_circle[i*10+1] = i*10;
    }

    int circle = 0;
    int rest = n;

    for(int i=0; i<m; i++){
        int tmp1, tmp2;
        if(b[i] == 'R') tmp1 = 0;
        else tmp1 = 1;
        if(d[i] == 'R') tmp2 = 0;
        else tmp2 = 1;

        cout << "10" << ":" << pre_circle[10] << "," << "11" << ":" << pre_circle[11] << "," << "20" << ":" << pre_circle[20] << "," << "21" << ":" << pre_circle[21] << "," << "30" << ":" << pre_circle[30] << "," << "31" << ":" << pre_circle[31] << "," << "40" << ":" << pre_circle[40] << "," << "41" << ":" << pre_circle[41] << "," << "50" << ":" << pre_circle[50] << "," << "51" << ":" << pre_circle[51] << "," << "60" << ":" << pre_circle[60] << "," << "61" << ":" << pre_circle[61] << "," << "70" << ":" << pre_circle[70] << "," << "71" << ":" << pre_circle[71] << endl;
        if(pre_circle[a[i]*10+tmp1] == c[i]*10+tmp2) circle++;
        else{
            pre_circle[pre_circle[a[i]*10+tmp1]] = pre_circle[c[i]*10+tmp2];

            pre_circle[pre_circle[c[i]*10+tmp2]] = pre_circle[a[i]*10+tmp1];
        }
        rest--;
    }

    cout << circle << ' ' << rest << endl;
}