#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N,M,sum=0;
    cin >> N >> M;
    int A[N];
    for(int i=0;i<N;i++)
        cin >> A[i];


    for(int i=0;i<N;i++){
        sum += ((1+A[i])*A[i])/2;
    }

    cout << (sum >= ((1+M)*M)/2 ? "YES" : "NO") << endl;
    
}