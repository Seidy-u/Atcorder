#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
   int N,P,ans=0;
   cin >> N >> P;
   int point[N];

    for(int i=0;i<N;i++){
        cin >> point[i];
        if(P>point[i])
            ans++;
    }
    cout << ans;
}