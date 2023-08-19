#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <bitset>
using namespace std;


int main(){
    int n;
    cin >> n;
    int h[n];
    for(int i=0; i<n; i++) cin >> h[i];

    for (int i=0;i < n-1;i++){
        if(h[i]>=h[i+1]){
            cout << h[i] << endl;
            return 0;
        }
    }
    cout << h[n-1] << endl;
}