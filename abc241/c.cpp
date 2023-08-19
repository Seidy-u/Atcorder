#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    int cnt = 0;
    // 横
    for(int i = 0; i < n; i++){
        string sub;
        for(int j = 0; j < n-5; j++){
            sub = s[i].substr(j, 6);
            for (char ch : sub){
                if (ch == '#')
                    cnt ++;
            }
            if(cnt > 3){
            cout << "Yes" << endl;
            return 0;
            }
            cnt = 0;
        }
    }

    // 縦
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-5; j++){
            for (int w = j; w < j+6 ; w++){
                if(s[w][i]=='#')      
                    cnt ++;          
            }
            if(cnt > 3){
            cout << "Yes" << endl;
            return 0;
            }
            cnt = 0;
        }
    }

    // ぬぬめ
    for(int i = 0; i < n-5; i++){
        for(int j = 0; j < n-5; j++){
            for (int w = 0; w < 6 ; w++){
                if(s[i+w][j+w]=='#')      
                    cnt ++;          
            }
            if(cnt > 3){
            cout << "Yes" << endl;
            return 0;
            }
            cnt = 0;
        }
    }
    // ぬぬめ２
    for(int i = n-1; i >= 5; i--){
        for(int j = 0; j < n-5; j++){
            for (int w = 0; w < 6 ; w++){
                if(s[i-w][j+w]=='#')      
                    cnt ++;          
            }
            if(cnt > 3){
            cout << "Yes" << endl;
            return 0;
            }
            cnt = 0;
        }
    }

    cout << "No" << endl;
    return 0;
}   