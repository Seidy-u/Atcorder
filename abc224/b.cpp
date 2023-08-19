#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<bitset>
using namespace std;

int main(){
    int H,W;
    bool flg = true;
    cin >> H >> W;
    vector < vector<int> > A(H,vector<int>(W+1));
    for(int i=0;i<H; i++){
        for(int j=0; j<W; j++){
            cin >> A[i][j];
        }
    }
    for(int i=0; i<H-1; i++){
        for(int j=i+1; j<H; j++){
            for(int k=0; k<W-1; k++){
                for(int l=k+1; l<W; l++){
                    if(A[i][k]+A[j][l]>A[j][k]+A[i][l]){
                        flg =false;
                    }
                }
            }
        }
    }
    if(flg)
        cout << "Yes";
    else
        cout << "No";

}