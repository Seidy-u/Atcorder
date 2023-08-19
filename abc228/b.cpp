#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N,X,ans=1;
    int A[100000];
    int flg[100000];
    int check = 0;

    cin >> N >> X;
    
    for(int i=0;i<N;i++){
        cin >> A[i];
        flg[i] = 0;
    }
    
    flg[X-1]=1;

    while(check == 0){

        if(flg[A[X-1]-1]==1){
            check = 1;
            continue;
        }

        flg[A[X-1]-1]=1;
        X = A[X-1];
        ans++;

    }

    cout << ans;
}