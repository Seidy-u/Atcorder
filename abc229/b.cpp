#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long int A,B;
    cin >> A >> B;
    int flg=0;
    while(A>0 && B>0){
        if((A%10)+(B%10) >= 10){
            flg = 1;
        }
        A/=10;
        B/=10;
    }
    if(flg == 1)
        cout << "Hard";
    else
        cout << "Easy";
}