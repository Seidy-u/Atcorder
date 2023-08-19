#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string S,T;
    int flg=0;

    cin >> S >> T;

    for(int K=0;K<26; K++){
        if(S==T){
            flg=1;
            break;
        }
        for(int i=0;i<T.length();i++){
            if(T[i]=='z'){
                T[i]='a';
                continue;
            }
            T[i]++;
        }
    }
    
    if(flg==0)
        cout << "No";
    else
        cout << "Yes";
    
}