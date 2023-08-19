#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <bitset>
using namespace std;

int main(){
    int l,r;
    string s;
    cin >> l >> r >> s;
    int size = s.length();
    for(int i=0; i<size; i++){
        if(i==(l-1)){
            for(int j=r-1; j>=l-1; j--){
                cout << s[j];
                i++;
            }
        }
        if(i<size)
            cout << s[i];
    }
}