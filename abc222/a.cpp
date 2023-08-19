#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string S;
    cin >> S;
    int N = S.length();
    for (int i=0; i<4-N; i++){
        cout << '0';
    }
    cout << S;
}