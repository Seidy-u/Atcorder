#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <bitset>
using namespace std;

int main(){
    long long N X;
    cin >> N >> X;
    vector<long long> L(N);
    vector<vector<long long> > a(N, vector<long long> (0));
    for(int i=0; i<N; i++){
        cin >> L.at(i);
        for(int j=0; j<L.at(i); j++){
            long long tmp;
            cin >> tmp;
            a.at(i).push_back(tmp);
        }
    }
    long long  ans = 0;

}