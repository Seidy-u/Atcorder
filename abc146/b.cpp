#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++){
        for (int j = 0; j<s.length();j++){
            if(s.at(j)=='Z'){
                s.at(j) = 'A';
                continue;
            }

            s.at(j) ++;
        }
    }
    cout << s << endl;
}