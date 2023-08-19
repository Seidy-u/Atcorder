#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <stdio.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N],B[N];
    int D[N];

    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
        D[i]=0;
    }

    map<long long,int> login;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < B[i]; j++){
            login[A[i]+j]=0;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < B[i]; j++){
            login[A[i]+j] ++;
        }
    }

    for (map<long long,int>::iterator i = login.begin(); i != login.end(); i++) {
        cout << i->first;
    }

    // for (map<int,int>::iterator i = login.begin(); i != login.end(); i++) {
    //     D[(i->second)-1]++;
    // }

    // for(int i = 0; i < N; i++)
    //     cout << D[i] << ' ';

}