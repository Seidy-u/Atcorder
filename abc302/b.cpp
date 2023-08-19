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
//     int h,w;
//     cin >> h >> w;
//     string s[h];
//     for(int i=0; i<h; i++) cin >> s[i];

//     int route_x[5] = {-1,-1,-1,-1,-1};
//     int route_y[5] = {-1,-1,-1,-1,-1};
//     string check_snuke = "";

//     for(int i=0; i<h; i++){
//         for(int j=0; j<w; j++){
//             //right
//             for(int k=j; k<j+5; k++){
//                 if(j+5 > w){
//                     for(int l=0; l<5; l++){
//                         route_x[l] = -1;
//                         route_y[l] = -1;
//                     }
//                     check_snuke = "";
//                     break;
//                 }
//                 cout << s[i][k];
//                 check_snuke += s[i][k];
//                 route_x[k-j] = i;
//                 route_y[k-j] = k;
//             }
//             if(check_snuke == "snuke") break;
//             else{
//                 for(int l=0; l<5; l++){
//                     route_x[l] = -1;
//                     route_y[l] = -1;
//                 }
//                 check_snuke = "";
//             }

//             //left
//             for(int k=j; k>j-5; k--){
//                 if(j-5 < 0){
//                     for(int l=0; l<5; l++){
//                         route_x[l] = -1;
//                         route_y[l] = -1;
//                     }
//                     check_snuke = "";
//                     break;
//                 }
//                 check_snuke += s[i][k];
//                 route_x[k-j] = i;
//                 route_y[k-j] = k;
//             }
//             if(check_snuke == "snuke") break;
//             else{
//                 for(int l=0; l<5; l++){
//                     route_x[l] = -1;
//                     route_y[l] = -1;
//                 }
//                 check_snuke = "";
//             }
//             //up
//             for(int k=i; k>i-5; k--){
//                 if(i-5 > 0){
//                     for(int l=0; l<5; l++){
//                         route_x[l] = -1;
//                         route_y[l] = -1;
//                     }
//                     check_snuke = "";
//                     break;
//                 }
//                 check_snuke += s[k][j];
//                 route_x[k-i] = k;
//                 route_y[k-i] = j;
//             }
//             if(check_snuke == "snuke") break;
//             else{
//                 for(int l=0; l<5; l++){
//                     route_x[l] = -1;
//                     route_y[l] = -1;
//                 }
//                 check_snuke = "";
//             }
//             //down
//             for(int k=i; k<i+5; k++){
//                 if(i+5 < h){
//                     for(int l=0; l<5; l++){
//                         route_x[l] = -1;
//                         route_y[l] = -1;
//                     }
//                     check_snuke = "";
//                     break;
//                 }
//                 check_snuke += s[k][j];
//                 route_x[k-i] = k;
//                 route_y[k-i] = j;
//             }
//             if(check_snuke == "snuke") break;
//             else{
//                 for(int l=0; l<5; l++){
//                     route_x[l] = -1;
//                     route_y[l] = -1;
//                 }
//                 check_snuke = "";
//             }
//             //rightup
    
//             //leftup

//             //rightdown

//             //leftdown
//         }
//     }


//     for(int i=0; i<5; i++) cout << route_x[i] << " " << route_y[i] << endl;
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
    int h,w;
    cin >> h >> w;
    string s[h];
    for(int i=0; i<h; i++) cin >> s[i];

    int route_x[5] = {-1,-1,-1,-1,-1};
    int route_y[5] = {-1,-1,-1,-1,-1};
    string check_snuke = "";

    for(int i=0; i<h; i++){
        if(check_snuke == "snuke" || check_snuke == "ekuns") break;
        for(int j=0; j<w; j++){
            // yoko
            if(j+5 <= w){
                for(int k=j; k<j+5; k++){
                    check_snuke += s[i][k];
                    route_x[k-j] = i+1;
                    route_y[k-j] = k+1;
                }
            }
            if(check_snuke == "snuke" || check_snuke == "ekuns") break;
            else{
                for(int l=0; l<5; l++){
                    route_x[l] = -1;
                    route_y[l] = -1;
                }
                check_snuke = "";
            }

            // tate
            if(i+5 <= h){
                for(int k=i; k<i+5; k++){
                    check_snuke += s[k][j];
                    route_x[k-i] = k+1;
                    route_y[k-i] = j+1;
                }
            }
            if(check_snuke == "snuke" || check_snuke == "ekuns") break;
            else{
                for(int l=0; l<5; l++){
                    route_x[l] = -1;
                    route_y[l] = -1;
                }
                check_snuke = "";
            }

            // naname_right
            if(i+5 <= h && j+5 <= w){
                int m=j;
                for(int k=i; k<i+5; k++){
                    check_snuke += s[k][m];
                    route_x[k-i] = k+1;
                    route_y[k-i] = m+1;
                    m+=1;
                }
            }
            if(check_snuke == "snuke" || check_snuke == "ekuns") break;
            else{
                for(int l=0; l<5; l++){
                    route_x[l] = -1;
                    route_y[l] = -1;
                }
                check_snuke = "";
            }

            //naname_left
            if(i-3 > 0 && j-3 > 0){
                int m=j;
                int idx = 0;
                for(int k=i; k>0; k--){
                    check_snuke += s[k][m];
                    route_x[idx] = k+1;
                    route_y[idx] = m+1;
                    m--;
                    idx++;
                }
            }
            if(check_snuke == "snuke" || check_snuke == "ekuns") break;
            else{
                for(int l=0; l<5; l++){
                    route_x[l] = -1;
                    route_y[l] = -1;
                }
                check_snuke = "";
            }
        }
    }   


    if(check_snuke == "snuke") for(int i=0; i<5; i++) cout << route_x[i] << " " << route_y[i] << endl;
    else for(int i=4; i>=0; i--) cout << route_x[i] << " " << route_y[i] << endl;
}