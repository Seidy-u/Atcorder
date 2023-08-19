#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string S;
    cin >> S;
    bool flg=true;
    int start=0,end=S.length()-1;
    int size=S.length();
    int counter=0;

    for(int i=0;i<S.length();i++){
        if(S[i]=='a'){
            start++;
            counter--;
        }
        else
            break;
    }

    reverse(S.begin(),S.end());

    for(int i=0;i<size;i++){
        if(S[i]=='a'){
            end--;
            counter++;
        }
        else
            break;
    }

    if(counter<0){
        cout << "No" << endl;
        return 0;
    }

    reverse(S.begin(),S.end());

    for(int i=start;start<end;i++){
        if(S[start]==S[end]){
            start++;
            end--;
        }
        else{
            flg = false;
            break;
        }
    }

    cout << (flg ? "Yes" : "No") << endl;
}