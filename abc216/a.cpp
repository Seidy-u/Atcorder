#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string n;
    cin >> n;
    int l = n.length()-1;
    for(int i=0;i<n.length();i++){
        if(n[i]=='.')
            break;
        cout << n[i];
        
    }
    if('0'<=n[l] && n[l]<='2')
            cout << '-' << endl;
        else if ('3'<=n[l] && n[l]<='6')
            return 0;
        else
            cout << '+' << endl;
}