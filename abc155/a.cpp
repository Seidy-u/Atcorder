#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b && b!=c){
        cout << "Yes" << endl;
    }
    else if(a!=b && b==c){
        cout << "Yes" << endl;
    }
    else if(a!=b && a==c){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}