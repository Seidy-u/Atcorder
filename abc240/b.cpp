#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    int ans=1;
    bool flg = true;

    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = i-1; j >= 0; j--){
            if(a[i]==a[j])
                flg = false;
        }
        if(flg && i!=0)
            ans ++;
        flg = true;
    }

    cout << ans << endl;
    
}