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

    map<char, int> check_s;    
    map<char, int> check_t;  

    int cnt_s_at = 0;
    int cnt_t_at = 0;
    for(int i=0; i<s.length(); i++){
        check_s[s[i]]++;
        check_t[t[i]]++;
    }

    // s -> t
    for(int i=0; i<s.length(); i++){
        if(s[i] == '@') check_t[s[i]]++;

        if(check_t[s[i]] > 0) check_t[s[i]]--;
        else if(check_t[s[i]] == 0 && check_t['@'] > 0){
            if(s[i] == 'a' || s[i] == 't' || s[i] == 'c'|| s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r') check_t['@']--;
            else{
                cout << "No" << endl;
                return 0;
            }
        }
        else{
                cout << "No" << endl;
                return 0;
        }
    }

    // t -> s
    for(int i=0; i<t.length(); i++){
        if(t[i] == '@') check_s[t[i]]++;

        if(check_s[t[i]] > 0) check_s[t[i]]--;
        else if(check_s[t[i]] == 0 && check_s['@'] > 0){
            if(t[i] == 'a' || t[i] == 't' || t[i] == 'c'|| t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r') check_s['@']--;
            else{
                cout << "No" << endl;
                return 0;
            }
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
