#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string S;
    cin >> S;
    int L = S.length();
    switch(L){
        case 1:
            if(S=="o" || S=="x")
                cout << "Yes";
            else 
                cout << "No";
            break;
        case 2:
            if(S=="ox" || S=="xo" || S=="xx")
                cout << "Yes";
            else 
                cout << "No";
            break;
        case 3:
            if(S=="oxx" || S=="xox" || S=="xxo")
                cout << "Yes";
            else 
                cout << "No";
            break;
        case 4:
            if(S=="oxxo" || S=="xoxx" || S=="xxox")
                cout << "Yes";
            else 
                cout << "No";
            break;
        case 5:
            if(S=="oxxox" || S=="xoxxo" || S=="xxoxx")
                cout << "Yes";
            else 
                cout << "No";
            break;
        case 6:
            if(S=="oxxoxx" || S=="xoxxox" || S=="xxoxxo")
                cout << "Yes";
            else 
                cout << "No";
            break;
        case 7:
            if(S=="oxxoxxo" || S=="xoxxoxx" || S=="xxoxxox")
                cout << "Yes";
            else 
                cout << "No";
            break;
        case 8:
            if(S=="oxxoxxox" || S=="xoxxoxxo" || S=="xxoxxoxx")
                cout << "Yes";
            else 
                cout << "No";
            break;
        case 9:
            if(S=="oxxoxxoxx" || S=="xoxxoxxox" || S=="xxoxxoxxo")
                cout << "Yes";
            else 
                cout << "No";
            break;
        case 10:
            if(S=="oxxoxxoxxo" || S=="xoxxoxxoxx" || S=="xxoxxoxxox")
                cout << "Yes";
            else 
                cout << "No";
            break;
    }
}