#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long N;
    cin >> N;

    if(-1*pow(2,31)<=N&&1*N<pow(2,31))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}