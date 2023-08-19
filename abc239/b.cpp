#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long X;
    cin >> X;
    cout << ((X < 0 && X%10!=0)? X/10-1 : X/10) << endl;
}