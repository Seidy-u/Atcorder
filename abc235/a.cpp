#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum=0;
    for(int i = 0; i <= 5; i++){
        sum += n%10;
        n /= 10;  
    }

    cout << 100*sum+10*sum+sum;
}