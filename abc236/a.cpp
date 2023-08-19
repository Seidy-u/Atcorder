#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
    string S;
    int a,b;
    cin >> S >> a >> b;
    swap(S[a-1],S[b-1]);
    cout << S << endl;

}