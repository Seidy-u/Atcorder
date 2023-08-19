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
    int box[n],p[n],q[n];
    int cnt_a=1,cnt_b=1;
    for(int i=0;i<n;i++) box[i] = i+1;
    for(int i=0;i<n;i++) cin >> p[i];
    for(int i=0;i<n;i++) cin >> q[i];

    int cnt = 1;
    do{
        bool flg_a = true;
        bool flg_b = true;

        for(int i=0;i<n;i++){
            if(box[i] != p[i]) flg_a = false;
            if(box[i] != q[i]) flg_b = false;
        }

        if(flg_a == true) cnt_a = cnt;
        if(flg_b == true) cnt_b = cnt;
        
        cnt++;
    }while(next_permutation(box,box+n));

    cout << abs(cnt_a - cnt_b) << endl;
}