#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    int q,cnt=0;
    cin >> s >> q;
    int t,f;
    char c;
    for(int i = 0; i < q; i++){
        cin >> t;
        if(t == 1){
            cnt ++;
        }
        else{
            cin >> f >> c;
            if(f==1 && cnt%2==0 || f==2 && cnt%2==1) s = c+s;
            else s += c;
        }
    }
    if(cnt%2==1) reverse(s.begin(), s.end());

    cout << s << endl;
}