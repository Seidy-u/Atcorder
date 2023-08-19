#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string N;
    cin >> N;
    if (N.length()==2)
    {
        if(stoi(N)<42)
            cout << "AGC0" << N; 
        else
            cout << "AGC0" << stoi(N)+1;
    }
    else
        cout << "AGC00" << N;
}