#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long H,N;
    cin >> H >> N;
    int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
        H-=A[i];
        if(H<=0){
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

}