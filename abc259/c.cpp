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
//     string s,t;
//     cin >> s >> t;

//     if(s == t){
//         cout << "Yes" << endl;
//         return 0;
//     }
//     if(s.length() > t.length()){
//         cout << "No" << endl;
//         return 0;
//     }

//     vector<pair<char> s_char;
//     s_char.push_back(s[0]);
//     vector<int> s_cnt;
//     s_cnt.push_back(1);
//     vector<char> t_char;
//     t_char.push_back(t[0]);
//     vector<int> t_cnt;
//     t_cnt.push_back(1);

//     int idx=0;
//     for(int i=1; i<s.length(); i++){
//         if(s[i] == s[i-1]){
//             s_cnt[idx]++;
//         }
//         else{
//             s_char.push_back(s[i]);
//             s_cnt.push_back(1);
//             idx++;
//         }
//     }

//     idx=0;
//     for(int i=1; i<t.length(); i++){
//         if(t[i] == t[i-1]){
//             t_cnt[idx]++;
//         }
//         else{
//             t_char.push_back(t[i]);
//             t_cnt.push_back(1);
//             idx++;
//         }
//     }

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
    string s,t;
    cin >> s >> t;

    if(s == t){
        cout << "Yes" << endl;
        return 0;
    }
    if(s.length() > t.length()){
        cout << "No" << endl;
        return 0;
    }

    vector<pair<char,int> > s_vec;
    vector<pair<char,int> > t_vec;

    int idx=0;
    for(int i=0; i<s.length(); i++){
        if(i==0){
            s_vec.push_back(make_pair(s[i], 1));
        }
        
        if(s[i] != s[i-1]){
            idx++;
            s_vec.push_back(make_pair(s[i], 1));
        }
        else{
            s_vec[idx].second++;
        }
    }

    idx=0;
    for(int i=0; i<t.length(); i++){
        if(i==0){
            t_vec.push_back(make_pair(t[i], 1));
        }
        if(t[i] != t[i-1]){
            idx++;
            t_vec.push_back(make_pair(t[i], 1));
        }
        else{
            t_vec[idx].second++;
        }
    }

    for(int i=0; i<s_vec.size(); i++) cout << s_vec[i].first << " " << s_vec[i].second << endl;
}