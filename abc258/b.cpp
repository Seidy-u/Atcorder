// #include <iostream>
// #include <string>
// #include <vector>
// #include <list>
// #include <algorithm>
// #include <queue>
// #include <stack>
// #include <set>
// #include <map>
// #include <unordered_map>
// #include <math.h>
// #include <climits>
// using namespace std;


// int main(){
//     long long n;
//     cin >> n;
//     string tmp_a[n];
//     for(int i=0; i<n; i++) cin >> tmp_a[i];

//     long long a[n][n];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++) a[i][j] = tmp_a[i][j]-'0';
//     }

//     vector<long long> i_array;

//     long long ans=0;

//     for(int i1=0; i1<n; i1++){
//         for(int j1=0; j1<n; j1++){
//             cout << "i1,j1 : "<< i1 << " " << j1 << endl;
//             long long i2=(i1+1>=n ? 0:i1+1);
           
//             long long j2=(j1+1>=n ? 0:j1+1);
//             cout << "i2,j2 : "<< i2 << " " << j2 << endl;
//             long long i3=(i2+1>=n ? 0:i2+1);
//             long long j3=(j2+1>=n ? 0:j2+1);
//             long long i4=(i3+1>=n ? 0:i3+1);
//             long long j4=(j3+1>=n ? 0:j3+1);
//             cout << "num : " << 1000*a[i1][j1]+100*a[i2][j2]+10*a[i3][j3]+a[i4][j4] << endl;
//             long long tmp=0;
//             for(int k=n; k>0; k++) tmp += pow(a[i1][j1],k)
//             ans = max(ans, 1000*a[i1][j1]+100*a[i2][j2]+10*a[i3][j3]+a[i4][j4]);
//         }
//     }
//     cout << ans << endl;
    
// }

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

    string tmp_a[n];
    for(int i=0; i<n; i++) cin >> tmp_a[i];

    long long a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) a[i][j] = tmp_a[i][j]-'0';
    }

    long long ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            long long tmp_i = i;
            long long tmp_j = j;
            long long tmp_ans = a[tmp_i][tmp_j] * pow(10, n-1);
            // cout << "s" << endl;
            // int cnt = 0;
            for(int k=1; k<n; k++){
                tmp_i = (tmp_i+1>=n ? 0:tmp_i+1);
                tmp_j = (tmp_j+1>=n ? 0:tmp_j+1);
                tmp_ans += (a[tmp_i][tmp_j] * pow(10, n-k-1));
                // cout << tmp_i << "," << tmp_j << endl;
                // cnt ++;
            }
            // cout << "cnt : " << cnt << endl;
            // cout << "g" << endl;
            // cout << tmp_ans << endl;
            ans = max(ans, tmp_ans);
        }
    }
    cout << ans << endl;
}