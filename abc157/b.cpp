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
#include <tuple>
using namespace std;

int main(){
    int a[3][3];
    int check[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
            check[i][j] = 0;
        }
    }
    
    int n;
    cin >> n;
    int b;
    for(int i=0; i<n; i++){
        cin >> b;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(a[i][j] == b) check[i][j] = 1;
            }
        }
    }
    
    string ans = "No";
    if(check[0][0] == 1 && check[0][0] == check[0][1] && check[0][1] == check[0][2]) ans = "Yes";
    if(check[1][0] == 1 && check[1][0] == check[1][1] && check[1][1] == check[1][2]) ans = "Yes";
    if(check[2][0] == 1 && check[2][0] == check[2][1] && check[2][1] == check[2][2]) ans = "Yes";

    if(check[0][0] == 1 && check[0][0] == check[1][0] && check[1][0] == check[2][0]) ans = "Yes";
    if(check[0][1] == 1 && check[0][1] == check[1][1] && check[1][1] == check[2][1]) ans = "Yes";
    if(check[0][2] == 1 && check[0][2] == check[1][2] && check[1][2] == check[2][2]) ans = "Yes";

    if(check[0][0] == 1 && check[0][0] == check[1][1] && check[1][1] == check[2][2]) ans = "Yes";
    if(check[0][2] == 1 && check[0][2] == check[1][1] && check[1][1] == check[2][0]) ans = "Yes";

    cout << ans << endl;

}