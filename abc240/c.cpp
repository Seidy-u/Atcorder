#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;
    int a[N],b[N];
    for(int i=0;i<N;i++){
        cin >> a[i] >> b[i];
    }

    int dp[N+1][X+1];
    for(int i=0;i<N+1;i++){
        for(int j=0;j<X+1;j++){
            dp[i][j]=0;
        }
    }
    dp[0][0] = 1;

    for(int i=0;i<N;i++){
        for(int j=0;j<X;j++){
            if(dp[i][j]==1){
                if(j+a[i]<=X){
                    dp[i+1][j+a[i]]=1;
                }

                if(j+b[i]<=X){
                    dp[i+1][j+b[i]]=1;
                }
            }
        }
    }

    cout << (dp[N][X] ? "Yes" : "No") << endl;
}