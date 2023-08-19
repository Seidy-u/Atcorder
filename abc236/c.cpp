#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    string S[N],T[M];

    for(int i=0;i<N;i++){
        cin >> S[i];
    }
    
    for(int i=0;i<M;i++){
        cin >> T[i];
    }

    int pos = 0;
    for(int i=0;i<N;i++){
        if(S[i]==T[pos]){
            cout << "Yes" << endl;
            pos++;
        }
        else
            cout << "No" << endl;
    }
}