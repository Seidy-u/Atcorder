#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(pow(2,n)>pow(n,2)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}