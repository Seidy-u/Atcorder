#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string S1,S2;
    cin >> S1 >> S2;
    if (S1[0]==S2[1] && S1[0]!=S1[1] && S1[0]!=S2[0])
    {
        cout << "No";
    }
    else
    {   
        cout << "Yes";
    }
}