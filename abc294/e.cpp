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
    long long l, n1, n2;
    cin >> l >> n1 >> n2;
    long long v1[n1], l1[n1], v2[n2], l2[n2];
    for(int i=0; i<n1; i++) cin >> v1[i] >> l1[i];
    for(int i=0; i<n2; i++) cin >> v2[i] >> l2[i];

    long long ans = 0;
    long long point1 = 0;
    long long point2 = 0;
    long long i = 0;
    while(i < l){
        if(v1[point1] == v2[point2]){
            if(l1[point1] > l2[point2]){
                ans += l2[point2];
                l1[point1] -= l2[point2];
                i += l2[point2];
                point2++;
            }
            else if(l1[point1] == l2[point2]){
                ans += l1[point1];
                i += l1[point1];
                point1++;
                point2++;
            }
            else{
                ans += l1[point1];
                l2[point2] -= l1[point1];
                i += l1[point1];
                point1++;
            }
        }
        else if(l1[point1] > l2[point2]){
            l1[point1] -= l2[point2];
            i += l2[point2];
            point2++;
        }
        else if(l1[point1] == l2[point2]){
            i += l1[point1];
            point1++;
            point2++;
        }
        else{
                l2[point2] -= l1[point1];
                i += l1[point1];
                point1++;
        }
    }

    cout << ans << endl;
}