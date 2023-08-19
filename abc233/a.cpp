#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <bitset>
using namespace std;


int main(){
    int x,y;
    cin >> x >> y;
    cout << (y>x ? ceil(float((y-x))/10) : 0 );
}