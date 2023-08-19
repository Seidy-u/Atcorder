#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int S,T,X;
    cin >> S >> T >> X;
    if(S<T){
        if(S<=X && X<T)
            cout << "Yes";
        else 
            cout << "No";
    }
    if(S>T){
        if(S<=X || X<T)
            cout << "Yes";
        else 
            cout << "No";
    }   
}