#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    long long A[H][W];

    
    for(int i=0;i<H;i++){
         for(int j=0;j<W;j++){
             cin >> A[i][j];
         }
    }

    for(int i=0;i<W;i++){
         for(int j=0;j<H;j++){
             cout << A[j][i] << ' ';
         }
         cout << endl;
    }
}