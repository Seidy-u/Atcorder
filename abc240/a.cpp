#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b ;
    if(abs(a-b)==1 || abs(a-b)==9)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}