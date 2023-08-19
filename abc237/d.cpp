#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ans[N+1];
    int start=0,end=N;

    for(int i = 0; i < N; i++){
        if(S[i]=='R'){
            start++;
        }
        else{
            end--;
        }
    }

    ans[start]=N;
    start--;
    end++;

    for(int i = 0;i<N+1;i++){
        if(S[N-1-i]=='R'){
            ans[start]=N-1-i;
            start--;
        }
        else{
            ans[end]=N-1-i;
            end++;
        }
    }

    for(int i=0; i<N+1; i++){
        cout << ans[i] << ' ';
    }
}