#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    char hand[N*2][M];
    vector<pair<int, int> > wincnt(N*2);
    for(int i=0;i<N*2;i++){
        wincnt[i].first=0;
        wincnt[i].second=i;
        for(int j=0;j<M;j++){
        cin >> hand[i][j];
        }
    }

    for(int i=0;i<M;i++){
        for(int j=0;j<N*2;j+=2){
            if(hand[wincnt[j].second][i]=='G'&&hand[wincnt[j+1].second][i]=='C' || hand[wincnt[j].second][i]=='C'&&hand[wincnt[j+1].second][i]=='P' || hand[wincnt[j].second][i]=='P'&&hand[wincnt[j+1].second][i]=='G')
                wincnt[j].first++;
            else if(hand[wincnt[j].second][i]=='G'&&hand[wincnt[j+1].second][i]=='P' || hand[wincnt[j].second][i]=='C'&&hand[wincnt[j+1].second][i]=='G' || hand[wincnt[j].second][i]=='P'&&hand[wincnt[j+1].second][i]=='C')
                wincnt[j+1].first++;
        }
        for(int i=0;i<N*2;i++){
            wincnt[i].second *=-1;
        }
        sort(wincnt.rbegin(),wincnt.rend());
        for(int i=0;i<N*2;i++){
            wincnt[i].second *=-1;
        }
    }

    for(int i=0;i<N*2;i++){
        cout << wincnt[i].second+1 << endl;
    }
}