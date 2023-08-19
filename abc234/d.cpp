#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    int P[N];
    for (int i=0; i<N;i++){
        cin >> P[i];
    }

    vector<int> box;
    for(int i=K;i<=N;i++){
        for(int j=0;j<i;j++){
            box.push_back(P[j]);
        }
        sort(box.begin(), box.end());
        reverse(box.begin(), box.end());
        cout << box[K-1] << endl;
        box.resize(0);
    }
    return 0;
}