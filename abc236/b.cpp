#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long N;
    cin >> N;
    long long A[4*N-1];
    int check[N];

    for(int i = 0; i < N; i++){
        check[i]=0;
    }

    for(int i=0; i < 4*N-1; i++){
        cin >> A[i];
        check[A[i]-1]++;
    }

    for(int i=0; i < N; i++){
        if(check[i]<4)
            cout << i+1;
    }
}