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
    if (S.at(N-1)=='r')
        cout << "er";
    else
        cout << "ist";
}